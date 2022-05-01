int redPin = 8;
int buttomPin = 12;
int LEDState= 0;
int buttomOld =1;
int buttomNew;
int DT=100;

void setup() {
  pinMode(redPin , OUTPUT);
  pinMode(buttomPin, INPUT);
  Serial.begin(9600);
}

void loop() {
 buttomNew = digitalRead(buttomPin);
 if (buttomOld ==0&& buttomNew == 1 ){
  if (LEDState == 0){
    digitalWrite(redPin , HIGH);
    LEDState = 1;
  }
  else{
  digitalWrite(redPin , LOW);
  LEDState = 0;
  }
 }

buttomOld = buttomNew;
delay(DT);
}
