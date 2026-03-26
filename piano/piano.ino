void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(5, INPUT);
pinMode(7, INPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int rio = digitalRead(2);
int piku = digitalRead(5);
int circus = digitalRead(7);
if(rio == HIGH){
tone(10,2349 );
}
else{
  noTone(10);
}
if(piku == HIGH){
  tone(11, 3951);
}
else{
  noTone(11);
  
}
if(circus == HIGH){
  tone(12, 3136);
}
else{
  noTone(12);
}
}
