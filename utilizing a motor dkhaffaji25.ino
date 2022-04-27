/*
*/
int in1=10;
int in2=9;
int speedPin=11;
float speed=125;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(speed, OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(speedPin, speed);
  delay(5000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  speed=0;
  delay(3000);
  digitalWrite(in1, HIGH);
  for (speed=0; speed<=255; speed=speed+51){
    analogWrite(speedPin, speed);
    delay(1000);
  }
  for (speed=255; speed>=0; speed=speed-51){
    analogWrite(speedPin, speed);
    delay(1000);
  }
  analogWrite(speedPin, 127);
  delay(3000);
  digitalWrite(in1, LOW);
  delay(2000);
  digitalWrite(in2, HIGH);
  delay(2000);
  digitalWrite(in2, LOW);
}  

void loop() {
    
}
