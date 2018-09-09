int ledPin = 8;
int sensePin = 0;
void setup() {
  analogReference(DEFAULT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(sensePin));
  int val = analogRead(sensePin);
  delay(50);
  

   if(val<50) 
   {
    digitalWrite(ledPin,HIGH);
    delay(500);
   }
   else {
    
   
   digitalWrite(ledPin,LOW);
   delay(500);
   }
}
