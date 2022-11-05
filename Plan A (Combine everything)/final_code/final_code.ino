#include "DHT.h"

#define WATER_SIGNAL_PIN 5
#define DHTPIN 2
#define DHTTYPE DHT11

int soil_humidity_sensorPin = 4; 
int soil_humidity_sensorValue;  
int water_value = 0;

DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  dht.begin();
}

void DHT_loop() {
  // Wait a few seconds between measurements.

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Air Humidity: "));
  Serial.print(h);
  Serial.println();
  Serial.print(F("Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.println();
}
void water_loop() {
  water_value = analogRead(WATER_SIGNAL_PIN); 

  Serial.print("Water sensor value: ");
  Serial.print(water_value);
  Serial.println();
}

void photon_loop() {
  int value = analogRead(0);
  Serial.print("Light value : ");
  Serial.print(value);
  Serial.print("\n");
}

void soil_humidity_loop() {
 soil_humidity_sensorValue = analogRead(soil_humidity_sensorPin); 
 Serial.print("Soil Humidity : ");
 Serial.print(soil_humidity_sensorValue);
 Serial.println(); 
}

void loop() {
  //if(Serial.available()){
    //String s = Serial.readString();
    //Serial.println(s);
  //}
  soil_humidity_loop();
  photon_loop();
  water_loop();
  DHT_loop();
  Serial.println();
  delay(2000);
}
