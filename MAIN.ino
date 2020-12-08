/*

PoketComputer
MAIN файл






-------------
Версия AOS > 3.1 [RELEASE]
Версия PoketComputer > 3.0 [BETA]
Создал > Minecraf-Tep channel

 */
int DOutput = 1000;

String text1 = "";
String text2 = "";
String text3 = "";
String text4 = "";
int cp = 0;
int page = 0;
int output[100];

int btn1;
int btn2;
int btn3;

int debug;

int DAuto = 5000;


#include "U8glib.h"

U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);



void draw(void) {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,11);
  u8g.print(text1);
  u8g.setPrintPos(0,24);
  u8g.print(text2);
  u8g.setPrintPos(0,38);
  u8g.print(text3);
  u8g.setPrintPos(0,52);
  u8g.print(text4);
}

void setup() {
PCSetUp();
}

void loop() {
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );


btn1 = digitalRead(4);
btn2 = digitalRead(5);
btn3 = digitalRead(6);
  


if(btn1 == 0){
  if(debug == 1){
  Serial.println("[debug] > cp + 1");
  }
  cp++;
  }

if(btn2 == 0){
  if(debug == 1){
  Serial.println("[debug] > cp - 1");
  }
  cp--;
}

if(cp >= 13){
  if(debug == 1){
  Serial.println("[debug] > cp >= 7");
  }
  cp = 0;
}

if(cp == -1){
  if(debug == 1){
  Serial.println("[debug] > cp = -1");
  }
  cp = 12;
}


switch(cp){


  case 0:
    app1();
  break;

  case 1:
    app2();
  break;

  case 2:
    app3();
  break;

  case 3:
    app4();
  break;

  case 4:
    app5();
  break;

  case 5: 
    app6(); 
  break;

  case 6:
    app7();
  break;

  case 7:
    app8();
  break;

  case 8:
    int1();
  break;

  case 9:
    int2();
  break;

  case 10:
    int3();
  break;

  case 11:
    int4();
  break;
  
break;
  
};
  
}







  
