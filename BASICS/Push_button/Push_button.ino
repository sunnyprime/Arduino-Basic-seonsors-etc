int led=8; //Led pin
int switchs=7;  //Switch pin
int prestate=0; //Previous state of pin
int switch_status=0;

void setup() {
pinMode(led, OUTPUT);
pinMode(switchs,INPUT_PULLUP);//Defining Pullup Input
Serial.begin(9600); //Setup Serial
}

void loop() {
switch_status=digitalRead(switchs);
//If button is pressed and previous state is 0 then it turn the light on
if(switch_status!=prestate && prestate==0) 
{
  digitalWrite(led,HIGH);
  prestate=1;
  Serial.println("IN High mode");
}
//If button is pressed and previous state is 1 then it turn the light off
else if(switch_status!=prestate && prestate==1)
{
  digitalWrite(led,LOW);
  prestate=0;
  Serial.println("IN LOw mode");
}
else{
  Serial.println("IN Else");
  }
}
