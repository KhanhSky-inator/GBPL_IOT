int sensorPin = 4; 
int sensorValue;  

void setup() {
 Serial.begin(9600);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.print("Soil humidity value : ");
 Serial.print(sensorValue);
 Serial.print("\n");
 
 delay(1000); 
}
