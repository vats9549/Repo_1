int pin =A0;
int val=0;
void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
 
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
val=analogRead(pin);
if(val<200)
{digitalWrite(13,HIGH);}
else
{digitalWrite(13,LOW);}

Serial.println(val);

  // put your main code here, to run repeatedly:


}
