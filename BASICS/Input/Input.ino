int pin1=7;
int pin2=4;
//Variable for loading data
int val_1=0;
int val_2=0;

void setup() {
pinMode(pin1,INPUT_PULLUP); //Defining input pin with pullup
pinMode(pin2,INPUT);   //Defining input pin without pullup
Serial.begin(9600); //Setup Serial
}

void loop() {
val_1=digitalRead(pin1);
val_2=digitalRead(pin2);
Serial.print("Pin1: ");
Serial.print(val_1);

Serial.print("   Pin2: ");
Serial.println(val_2);
delay(100);

}
