// setup файл




void PCSetUp(){
  Serial.begin(9600);
  Serial.println("[Serial] > Started");
  delay(100);
  pinMode(4,INPUT_PULLUP);
  Serial.println("[btn1] > Started");
  delay(100);
  pinMode(5,INPUT_PULLUP);
  Serial.println("[btn2] > Started");
  delay(100);
  pinMode(6,INPUT_PULLUP);
  Serial.println("[btn3] > Started");
  delay(100);
  Serial.println("[screen] > Started");
  delay(100);
  Serial.print("[debug] > ");
  delay(100);
  Serial.println(debug);
  delay(1000);
  Serial.println("---[ Setup finished ]---");
};


void anim1(){
  
  Serial.print("[--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.print("--");
  delay(100);
  Serial.println("--]");


  
};
