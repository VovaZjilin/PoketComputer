void app1(){
  text1 = "pcp[d,o,1].pca < ";
  text2 = "pcp[d,o,0].pca ";
  text3 = "pcp[d,i].pca   ";
  text4 = "pcp[a,i].pca   ";
  if(btn3 == 0){
  pinMode(A0,OUTPUT);
  digitalWrite(A0,HIGH);
  Serial.println("HIGH");
  } 
};


void app2(){
  text1 = "pcp[d,o,1].pca  ";
  text2 = "pcp[d,o,0].pca <";
  text3 = "pcp[d,i].pca    ";
  text4 = "pcp[a,i].pca    ";
  if(btn3 == 0){
  pinMode(A0,OUTPUT);
  digitalWrite(A0,LOW);
  Serial.println("LOW");
  }
};


void app3(){
  text1 = "pcp[d,o,1].pca  ";
  text2 = "pcp[d,o,0].pca  ";
  text3 = "pcp[d,i].pca   <";
  text4 = "pcp[a,i].pca    ";
           
  if(btn3 == 0){
    int index = 0;
    for(int i=0; i<100; i++){
    pinMode(A0,INPUT);
    int input = digitalRead(A0);
    Serial.print("[pcp] > ");
    Serial.print(input);
    Serial.print(" [");
    Serial.print(index);
    Serial.println("%]");
    output[index] = input;
    delay(DOutput);
    index++;
    }
  Serial.println("Loading...");
  delay(5000);
  anim1();
  Serial.println("results saved at [int output]");
  }
};


void app4(){
  text1 = "pcp[d,o,1].pca  ";
  text2 = "pcp[d,o,0].pca  ";
  text3 = "pcp[d,i].pca    ";
  text4 = "pcp[a,i].pca   <";
  if(btn3 == 0){
    int index = 0;
    for(int i=0; i<100; i++){
    pinMode(A0,INPUT);
    int input = analogRead(A0);
    Serial.print("[pcp] > ");
    Serial.print(input);
    Serial.print(" [");
    Serial.print(index);
    Serial.println("%]");
     output[index] = input;
    delay(DOutput);
    index++;
    }
  Serial.println("Loading...");
  delay(5000);
  anim1();
  Serial.println("results saved at [int output]");
  }
};


void app5(){
  text1 = "readOut.pca    <";
  text2 = "info.text       ";
  text3 = "debug.pca       ";
  text4 = "auto().pca";
  if(btn3 == 0){
    int index = 0;
  for(int i=0; i<100; i++){
    Serial.print("[ReadOut] > ");
    Serial.print(output[index]);
    Serial.print(" [");
    Serial.print(index);
    Serial.println("%]");  
    
    index++;
    }
    cp = 0;
    anim1();
  }
};


void app6(){
  text1 = "readOut.pca    ";
  text2 = "info.text      <";
  text3 = "debug.pca       ";
  text4 = "auto().pca";
  if(btn3 == 0){
   
  text1 = "PoketCompeter 3";
  text2 = "OS version 3.1";
  text3 = "Created by";
  text4 = "[Minecraf-Tep]";

  }
};


void app7(){
  if(debug == 0){
  text1 = "readOut.pca     ";
  text2 = "info.text       ";
  text3 = "debug[OFF].pca <";
  text4 = "auto().pca";
  }
  else{
  text1 = "readOut.pca     ";
  text2 = "info.text       ";
  text3 = "debug[ON].pca  <";
  text4 = "auto().pca"; 
  }
  
  if(btn3 == 0){
    
  if(debug == 0){
  debug = 1;
  delay(500);
  Serial.println("[debug] > ON");
  }
  
  else{
  debug = 0;
  delay(500);
  Serial.println("[debug] > OFF");  
  }
  
  } 
};


void app8(){
  text1 = "readOut.pca     ";
  text2 = "info.text       ";
  text3 = "debug.pca       ";
  text4 = "auto().pca     <";

  if(btn3 == 0){
    pinMode(A0,OUTPUT);
    while(true){
    digitalWrite(A0,1);
    delay(DAuto);
    digitalWrite(A0,0);
    delay(2000);
    btn1 = digitalRead(4);
    if(btn1 == 0){
      break;
    }
    }
  }
};



//int




void int1(){
  text1 = "DOutput[+].int <";
  text2 = "DOutput[-].int  ";
  text3 = "                ";
  text4 = DOutput;
  if(btn3 == 0){
   DOutput += 10;
  }
  if(DOutput > 10000){
      DOutput = 1000;
  }
   
};

void int2(){
  text1 = "DOutput[+].int  ";
  text2 = "DOutput[-].int <";
  text3 = "                ";
  text4 = DOutput;
  if(btn3 == 0){
   DOutput -= 10;
  }
  if(DOutput < 100){
      DOutput = 100;
  }
};







void int3(){
  text1 = "DAuto[+].int   <";
  text2 = "DAuto[-].int    ";
  text3 = "                ";
  text4 = DAuto;
  if(btn3 == 0){
   DAuto += 100;
  }
  if(DAuto > 10000){
      DAuto = 1000;
  }
   
};

void int4(){
  text1 = "DAuto[+].int    ";
  text2 = "DAuto[-].int   <";
  text3 = "                ";
  text4 = DAuto;
  if(btn3 == 0){
   DAuto -= 100;
  }
  if(DAuto < 100){
      DAuto = 100;
  }
};
