int redPin = 3;
int leftPin = 2;
int rightPin = 12;
int leftRead;
int RightRead;
int redBrightness=0;
int DT = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin , OUTPUT);
pinMode(leftPin, INPUT);
pinMode(rightPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
leftRead = digitalRead(leftPin);
RightRead = digitalRead(rightPin);
Serial.println(redBrightness);
if (leftRead == 0){
  redBrightness = redBrightness + 5;
  Serial.println(redBrightness);
  delay(DT);
  if (redBrightness >= 245){
    redBrightness = 250;
    Serial.println(redBrightness);
  delay(DT);
  }
}
if (RightRead == 0){
  redBrightness = redBrightness - 5;
  Serial.println(redBrightness);
  delay(DT);
  if (redBrightness <= 10){
    redBrightness = 5;
    Serial.println(redBrightness);
  delay(DT);
  }
}
analogWrite(redPin , redBrightness);
delay(DT);
}
