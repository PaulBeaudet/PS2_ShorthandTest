//convertion.ino Copyright Paul Beaudet 2015 - See license.txt for details
//This file contain convertion data and flow
//enabling special key pass through, macros, and alternitive layouts
//primarily dvorak

const byte dvorak[] PROGMEM =
{ //127 byte ASCII convertion table
//S, ! , " , # , $ , % , & , ' , ( , ) , * , + , , , - , . , / ,
 32, 33, 95, 35, 36, 37, 38, 45, 40, 41, 42,125,119, 91,118,122,
//0, 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , : , ; , < , = , > , ? ,
 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 83,115, 87, 93, 86, 90,
//@, A , B , C , D , E , F , G , H , I , J , K , L , M , N , O ,
 64, 65, 88, 74, 69, 62, 85, 73, 68, 67, 72, 84, 78, 77, 66, 82,
//P, Q , R , S , T , U , V , W , X , Y , Z , [ , \ , ] , ^ , _ ,
 76, 34, 80, 79, 89, 71, 75, 60, 81, 70, 58, 47, 92, 61, 94,123,
//`,  a, b , c , d , e , f , g , h , i , j , k , l , m , n , o ,
 96, 97,120,106,101, 46,117,105,100, 99,104,116,110,109, 98,114,
//p, q , r , s , t , u , v , w , x , y , z , { , | , } , ~ ,del,
108, 39,112,111,121,103,107, 44,113,102, 59, 63,124, 43,126, 8 ,
};

#define SPECIALCASES 12
const byte special[2][SPECIALCASES] PROGMEM =
{//B,T, CR,LFT,RGT, UP,DWN,HME,PGU,PGD,END,DEL 
  {8,9, 13,219,221,218,220,193,194,197,196,195},
  //conversion from keyboard(top) to virtual keyboard(bottom)
  {8,8,176,216,215,218,217,210,211,214,213,  9}
 //0,1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10,
};

byte convertion(byte letter)
{
  static boolean qwerty = false;//default to dvorak, change to true for qwerty
  if(letter == 192) //toggle layout via insert key
  {
    qwerty = !qwerty;
    return 0;
  }

  if(letter < 32 || letter > 127)
  {
    for(byte i = 0; i < SPECIALCASES; i++)
    {
      if(pgm_read_byte(&special[0][i])==letter)
      {
        return pgm_read_byte(&special[1][i]);
      }
    }
    return 0;//given nothing found, return raw value
  } 
  if(qwerty){return letter;}
  else{return pgm_read_byte(&dvorak[letter-32]);}
}

void controlChars(byte input)
{
  if(input == 129 || input == 136)//control cases
  {
    Keyboard.press(128);//KB_LEFT_CTRL
  }
  if(input == 128 || input == 135)
  {
    Keyboard.press(130);//KB_LEFT_ALT
  }
  if(input == 208)//press zero for upload
  {
    Keyboard.press(128);
    Keyboard.press(117);//u
    Keyboard.releaseAll();
  }
}
