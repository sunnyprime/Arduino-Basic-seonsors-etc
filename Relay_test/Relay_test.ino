int relayPin = 14;
 
void setup() {
 
    pinMode(relayPin, OUTPUT);
 
}
 
void loop() {
 
   digitalWrite(relayPin, HIGH); //Set the pin to HIGH (3.3V)
   delay(500);                  //Delay 5 seconds
   digitalWrite(relayPin, LOW);  //Set the pin to LOW (0V)
   delay(500);                  //Delay 5 seconds
 
}
