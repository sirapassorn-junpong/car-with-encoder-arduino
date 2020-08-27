//motor left
int in1 = 10;
int in2 = 9;
int enL = 12;
int en1=11;
//motor right
int in3 = 7;
int in4 = 8;
int enR = 5;
int en2 = 6;
int inA1state=HIGH;
int inA2state=LOW;
int countA=0;
int previousA=LOW;
int currentA=LOW;


boolean isConnect;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(enL, INPUT);
  pinMode(enR, INPUT);

  analogWrite(en1,60);
  digitalWrite(in1,inA1state);
  digitalWrite(in2,inA2state);
//  attachInterrupt(digitalPinToRead(enR),MyISB,RISING);
  Serial.begin(9600);
//  sumL = 0;
//  stateL=0;
//  digitalWrite(in1, HIGH);
//  digitalWrite(in2, LOW);
//  analogWrite(en1,25);
//
//  isConnect=false;
}
//
//void MyISB(){
//  int count = count + 1;
//}
void loop() {
  digitalWrite (in1,HIGH );
  digitalWrite (in2,LOW );
    
  if(countA==40){
    digitalWrite (en1,HIGH );
    digitalWrite (in1,LOW );
    digitalWrite (in2,LOW );
    delay(1000);
    inA1state=!inA1state;
    digitalWrite (in1,inA1state);
    digitalWrite (in2,inA2state);
    analogWrite (en1,60);
    countA=0;
    
  }

  currentA=digitalRead (enL);

  if(currentA != previousA){
    countA++;
    Serial.println (countA);
    previousA=currentA;
  }
  
  
  
//  int LeftRead = digitalRead(enL);
//  int RightRead = digitalRead(enR)
//
//  if (prev_readL != LeftRead)
//  {
//    sumL ++;
//  }
//  prev_readL = LeftRead;
//    
//  if(sumL==40){
//    digitalWrite(in1, LOW);
//    digitalWrite(in2, LOW);
//    delay(5000);
//    sumL=0;
//  }
//  
//  Serial.println(sumL);
//  delay(50);
  
}
