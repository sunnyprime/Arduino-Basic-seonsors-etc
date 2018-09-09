//Module pin - = GND Module pin S = +5V
//
//Connection to Arduino
//
//Arduino digital pin 8 --> Module pin S
//Arduino GND --> Module pin -

//Example code KY012 active buzzer
int speakerPin = 8;
void setup () {
  pinMode (speakerPin, OUTPUT);
}
void loop () {
  analogWrite (speakerPin, 255);
  delay (50);
  analogWrite (speakerPin, 0);
  delay (10);
}
