#include<Servo.h>
Servo myservo;
int echo =12;
int trig =11;

long duration;
float distance;
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
myservo.attach(10);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(echo, INPUT);
pinMode(trig, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=180;i++){
  myservo.write(i);
  delay(20);
  digitalWrite(trig, LOW);
  delay(10);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * 0.017;
  if(distance<10){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    tone(2, 1500);
  }
  else{
    digitalWrite(3,LOW);
    digitalWrite(4, HIGH);
    tone(2, 750);
  }
}
for(int i=180;i>=0;i--){
  myservo.write(i);
  delay(20);
  digitalWrite(trig, LOW);
  delay(10);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * 0.017;

  if(distance<10){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    tone(2, 1500);
  }
  else{
    digitalWrite(3,LOW);
    digitalWrite(4, HIGH);
    tone(2, 750);
  }
}

  
}
