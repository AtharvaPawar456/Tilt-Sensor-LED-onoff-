//Basic Sensor Tutorial
//Tilt Sensor (LED on/off)
int tilt = 2;         // the number of the input pin
int led = 13;       // the number of the output pin

void setup()
{
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  int reading;
  reading = digitalRead(tilt);
  
  if(reading){
    digitalWrite(led, LOW);
    Serial.println(reading);}
  else{
    digitalWrite(led, HIGH);
    Serial.println(reading);}
}