const int ledpin1=13;
const int ledpin2=11;
const int ldrpin1=A0;
const int ldrpin2=A1;
const int ldrpin3=A2;
void setup(){
  Serial.begin(9600);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ldrpin1,INPUT);
  pinMode(ldrpin2,INPUT);
  pinMode(ldrpin3,INPUT);
}


void loop(){
     int ldrstatus1=100*analogRead(ldrpin1);
     int ldrstatus2=100*analogRead(ldrpin2);
     int ldrstatus3=100*analogRead(ldrpin3);
     int ldr=((ldrstatus1+ldrstatus2+ldrstatus3)/3);
       Serial.println(ldr);
       delay(100);
     if(  ldr<=40){
        digitalWrite(ledpin1,HIGH);
        digitalWrite(ledpin2,HIGH);
     }
     else if(ldr>=40 & ldr<=160){
          digitalWrite(ledpin1,HIGH);
          digitalWrite(ledpin2,LOW);
     }
     else{
        digitalWrite(ledpin1,LOW);
        digitalWrite(ledpin2,LOW);
     }
}
