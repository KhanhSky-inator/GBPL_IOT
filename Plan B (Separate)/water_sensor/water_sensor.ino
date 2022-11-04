/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-water-sensor
 */

#define SIGNAL_PIN 5

int value = 0; // variable to store the sensor value

void setup() {
  Serial.begin(9600);  // configure D7 pin as an OUTPUT
  // turn the sensor OFF
}

void loop() {
  // turn the sensor ON
  delay(10);                      // wait 10 milliseconds
  value = analogRead(SIGNAL_PIN); // read the analog value from sensor  // turn the sensor OFF

  Serial.print("Sensor value: ");
  Serial.println(value);

  delay(1000);
}
