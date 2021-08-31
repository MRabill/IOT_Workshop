int motorPin = 2;
int sensorRead;
int sensor = A0;
bool irrigation = false;

void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  sensorRead = analogRead(sensor);
  
  if ( sensorRead > 635 && irrigation == false)
  {
  	digitalWrite(2, HIGH);
  	delay(10000);
  	digitalWrite(2, LOW); 
    irrigation = true;
  }
  
  if ( sensorRead < 150 && irrigation == true)
  {
  	digitalWrite(2, HIGH);
  	delay(10000);
  	digitalWrite(2, LOW); 
    irrigation = false;
  }
}
