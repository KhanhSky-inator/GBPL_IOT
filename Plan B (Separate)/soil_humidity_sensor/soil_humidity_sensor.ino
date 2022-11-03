int sensorPin = A0; 
int sensorValue;  
int limit = 300; 
int led_builtin_pin;

void setup() {
 Serial.begin(9600);
 pinMode(led_builtin_pin, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.print("Soil humidity value : ");
 Serial.print(sensorValue);
 Serial.print("\n");
 
 if (sensorValue < limit) {
  digitalWrite(led_builtin_pin, HIGH); 
 }
 else {
  digitalWrite(led_builtin_pin, LOW); 
 }
 
 delay(1000); 
}
