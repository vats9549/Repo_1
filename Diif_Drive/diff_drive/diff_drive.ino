
const int i1=6,i2=7,i3=4,i4=5;
const int o1=8;
void setup() {
  pinMode(i1,OUTPUT);
pinMode(i2,OUTPUT);
pinMode(i3,OUTPUT);
pinMode(i4,OUTPUT);
digitalWrite(o1,HIGH);
}
void f()
{
  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  digitalWrite(i3,HIGH);
  digitalWrite(i4,LOW);
delay(100);
return;}

void b()
{
  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  digitalWrite(i3,HIGH);
  digitalWrite(i4,LOW);
delay(100);
return;}

void c()
{
  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,HIGH);
delay(100);
return;}
void a()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,HIGH);
  digitalWrite(i3,HIGH);
  digitalWrite(i4,LOW);
delay(100);
return;}
void x()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(i3,LOW);
  digitalWrite(i4,LOW);
delay(100);
return;}
void loop() {
char c;
while(Serial.available())
{
c=(char)Serial.read();



if(c=='C' || c =='c')
  { 
    clockwise();
    delay(100);
    break;
    }
 else if(c=='a' || c=='A')
 {
  anticlock();
  }
 else if(c == 's' || c=='S')
  {
    brake();
    }
  else if(c =='r' || c == 'R')
    {
      freerun();
      }
    else
    {
      Serial.println("Wrong char");
      }

}
  
}
