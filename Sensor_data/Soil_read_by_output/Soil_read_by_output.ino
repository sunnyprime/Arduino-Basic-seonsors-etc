byte humidity_sensor_pin = 17;
byte humidity_sensor_vcc = 2;

void setup() {
  // Init the humidity sensor board
  pinMode(humidity_sensor_vcc, OUTPUT);
  digitalWrite(humidity_sensor_vcc, LOW);

  // Setup Serial
  
  
  Serial.begin(11500);
}

int read_humidity_sensor() {
  digitalWrite(humidity_sensor_vcc, HIGH);
  delay(500);
  int value = analogRead(humidity_sensor_pin);
  digitalWrite(humidity_sensor_vcc, LOW);
  return 1023 - value;
}

void loop() {
  
  Serial.print("Humidity Level (0-1023): ");
  Serial.println(read_humidity_sensor()); 
  delay(1000);
}
