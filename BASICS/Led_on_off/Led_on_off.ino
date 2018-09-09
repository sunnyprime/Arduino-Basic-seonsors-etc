//Connect +ve led leg to pin 9 and -ve led led to ground pin of arduino

int led=8; //Defining Leds Pins numbers
void setup() {
pinMode(led,OUTPUT); //Defining The Leds Pins as OutPuts
}

void loop() {
digitalWrite(led,HIGH); //Turning on the defined pin
delay(1000);            //Setting up the timer for 1 secons
digitalWrite(led, LOW); //Turning off the leds
delay(1000); 
}
