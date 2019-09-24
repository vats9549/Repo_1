int anapin = 9;
int val = 127;
void setup() {
  Serial.begin(9600);
  pinMode(anapin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int i;
  for(i=0;i<=255;i++)
   {analogWrite(anapin,i);
   delay(6);
   }

 for(i=255;i>0;i--)
 { analogWrite(anapin,i);
   delay(4);
 }} 
 

  
  
  // put your main code here, to run repeatedly:
