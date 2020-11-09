#include<Servo.h>
int ip =11;
Servo s1;
int a;
void setup() {
Serial.begin(9600);
s1.attach(ip);
s1.write(a);
Serial.println(a);}

void loop() {
  int i;
  a=Serial.parseInt();
for (i=0;i<=a;i++)
{s1.write(i);
delay(10);}
s1.write(0);
delay(100);
}
