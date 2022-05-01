#include <Servo.h>
int servoPin=9;
int servoPos=90;
int servoPos1=0;
int photosensor = 5;
int readval = A2;
int readvalue;
int redPin = 2;
int buzzerPin = 3;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(photosensor , OUTPUT);
pinMode(readval , INPUT);
pinMode(redPin, OUTPUT);
pinMode(buzzerPin, OUTPUT);
}

void loop() {
digitalWrite(photosensor, 255);
readvalue = analogRead(readval);
Serial.println(readvalue);
delay(250);
if (readvalue < 500){
  digitalWrite(redPin, HIGH);
  digitalWrite(buzzerPin, HIGH);
  myServo.write(servoPos);
  delay(100);
  myServo.write(servoPos1);
  delay(100);
}
digitalWrite(redPin, LOW);
digitalWrite(buzzerPin, LOW);
  // put your main code here, to run repeatedly:
}
