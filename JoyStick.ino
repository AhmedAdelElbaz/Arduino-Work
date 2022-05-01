int XPin = A0;
int YPin = A2;
int SPin= 9;
int Xval;
int Yval;
int Sval;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
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
delay(100);
Serial.print(Xval);
Serial.print(" ");
Serial.print(Yval);
Serial.print(" ");
Serial.println(Sval);
}
