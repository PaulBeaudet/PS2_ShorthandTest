//customKeyboard by PaulBeaudet Copyright 2015 - See License for details
//The goal of this project is to make customizations to a standard keyboard
//Specifically customizations that show measurable efficiency changes.

// HARDWARE - Arduino Micro and the E1115B ps2 convertion module 
// Micro: RX to PS2 module TX / 5v to 5 / GND to 0V
#include <avr/pgmspace.h>//explicitly stated read only memory

#define IMPLICIT_SPACE 153 //right option key
#define MONITOR_BUTTONS 33 //signal to monitor buttons

void setup()
{
  buttonUp();
  Serial1.begin(115200); //E1115B baud rate when "DR" pin is open
                        //Rate is 56k when connected to ground
  Serial.begin(115200);
  Keyboard.begin();
}

void loop()
{
  inOut();//recieves from ps2 module and converts to HID keystrokes
}

void inOut()
{
  static byte lastOutput = 0;
  
  if(Serial1.available())
  {
    byte input = Serial1.read();
    outputHandlr(input, conversion(input));
  }

  buttonUpdate(); // check hard-wired buttons
  int chord = trueChord(0);
  if(chord)
  {
    byte hardIO = buttonSignal(chord);
    outputHandlr(hardIO, printableSignal(hardIO));
  }
}

void outputHandlr(byte input, byte output)
{
  static byte lastOutput = 0;
  
  if(output)
  { //release before write only after a TAB for alt-tab
    if(output != 9 && lastOutput == 9){Keyboard.releaseAll();}
    Keyboard.write(output); //write char
    if(output != 9 && lastOutput != 9){Keyboard.releaseAll();}
    headsUpSuggest(output, placeHolder(output));
    lastOutput = output;  //release after for ctrl options
  }
  else
  {
    if(input == IMPLICIT_SPACE)
    {
      byte plc = placeHolder(input);
      headsUpSuggest(input, plc);
    }
    else{controlChars(input);}//account for control conditions
  }
}

byte placeHolder(byte letter)
{
  static byte place = 0xff;
  
  if(letter > 64 && letter < 91){place++;}
  else if(letter > 96 && letter < 123){place++;}
  else if(letter == 32 || letter == IMPLICIT_SPACE)
  {
    byte lastPlace = place;
    place = 0xff;
    return lastPlace;
  }
  else if(letter == 8)
  {
    if(place == 0 || place == 0xff){place = 0xff;}
    else{place--;}
  }
  else{place = 0xff;}
  return place;
}
