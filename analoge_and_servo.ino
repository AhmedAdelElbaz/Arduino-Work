#include <Servo.h>
int servoPin=9;
float servoPos;
int XPin = A0;
int YPin = A2;
int SPin= 8;
int Xval;
float Yval;
int Sval;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(XPin, INPUT);
pinMode(YPin, INPUT);
pinMode(SPin, INPUT);
digitalWrite(SPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval= analogRead(XPin);
Yval= analogRead(YPin);
Sval= digitalRead(SPin);

servoPos = (180. / 1023.)*Yval;
Serial.println(servoPos);
myServo.write(servoPos);

}
