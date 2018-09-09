int sensor= 17;
int digital=5;
int A=0;
int D=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(digital,INPUT_PULLUP);
 pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  A=analogRead(sensor);
  D=digitalRead(digital);
  Serial.print("Analog Level:");
  Serial.print(A);
  Serial.print("Moisture Level 2:");
  Serial.println(D);
  delay(500);
}
