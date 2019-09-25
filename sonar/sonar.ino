int echo=10;
int trig=9;
int t,s;
void setup() {
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  
  digitalWrite(trig,HIGH);
  delayMicroseconds(50);
   digitalWrite(trig,LOW);
   delayMicroseconds(50);
   digitalWrite(trig,HIGH);
   
  t = pulseIn(echo,HIGH);
  s=t*0.034/2;
  
  Serial.println(s);
  

}
