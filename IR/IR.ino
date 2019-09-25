void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == HIGH)
  { digitalWrite(13, HIGH);
    Serial.println("OBJECT FOUND");
  }
  else
  { digitalWrite(13, LOW);
    Serial.println("NO OBJECT FOUND");
  }
  delay(500);
  

}
