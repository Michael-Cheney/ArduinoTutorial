int LEDPin=13;
int waitTimeOn=300;
int waitTimeOff=200;

void setup() {

  pinMode(LEDPin,OUTPUT);
  
}

void loop() {

  digitalWrite(LEDPin,HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin,LOW);
  delay(waitTimeOff);

}
