//customKeyboard by PaulBeaudet Copyright 2015 - See License for details
//The goal of this project is to make customizations to a standard keyboard
//Specifically customizations that show measurable efficiency changes.

// HARDWARE - Arduino Micro and the E1115B ps2 convertion module 
// Micro: RX to PS2 module TX / 5v to 5 / GND to 0V
#include <avr/pgmspace.h>//explicitly stated read only memory

void setup()
{
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
    byte output = convertion(input);
    if(output)
    { //release before write only after a TAB for alt-tab
      if(output != 9 && lastOutput == 9){Keyboard.releaseAll();}
      Keyboard.write(output); //write char
      if(output != 9 && lastOutput != 9){Keyboard.releaseAll();}
      lastOutput = output;  //release after for ctrl options
    }
    else
    {
      controlChars(input); //account for control conditions
    }
  }
}
