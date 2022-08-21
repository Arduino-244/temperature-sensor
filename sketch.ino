int sensorPin = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
  int tempResult = analogRead(sensorPin);  
  double voltage = (tempResult * 5.0) / 1024.0;
  Serial.print(voltage); 
  Serial.println(" V");
  double temperatureC = (voltage - 0.5) * 100;
  Serial.print(temperatureC); 
  Serial.println(" graus em C°");
  double temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF); 
  Serial.println(" graus em F°");
  delay(1000);
}