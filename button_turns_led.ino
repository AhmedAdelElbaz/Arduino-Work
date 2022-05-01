int ButtomPin=8;
int ButtomVal;
int dt=100;
int oldval=1;
int ledPin = 4;
int ledstate=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ButtomPin, INPUT);
digitalWrite(ButtomPin,HIGH);
pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
ButtomVal = digitalRead(ButtomPin);
Serial.print("your buttom = ");
Serial.println(ButtomVal);
delay(dt);
if (oldval ==1 && ButtomVal == 0) {
  if (ledstate == 0){
    digitalWrite(ledPin , HIGH);
    ledstate = 1;
  }
   else {
    digitalWrite(ledPin ,LOW);
    ledstate =0;
  } 
  }
 
   oldval = ButtomVal;
}
