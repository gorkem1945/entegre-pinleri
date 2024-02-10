#define in4 8
#define in3 9
#define en2 10
#define en1 11
#define in2 12
#define in1 13
// L293D entegresinin ilgili pinleri , arduinonun pinlerine sabitlendi.
void setup() {
 for(int a=8; a<13; a++)
 {
  pinMode(a,OUTPUT);
  digitalWrite(a,LOW);
 }
}

void loop() {
digitalWrite(en1,HIGH);
digitalWrite(in1,HIGH);
delay(3000);
digitalWrite(en1,LOW);
delay(3000);
digitalWrite(en2,HIGH);
digitalWrite(in4,HIGH);
delay(3000);
}
