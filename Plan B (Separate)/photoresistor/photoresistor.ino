void setup() {
  Serial.begin(9600);
}


void loop() {
  int value = analogRead(A0);
  Serial.print("Light value : ");
  Serial.print(value);
  Serial.print("\n");
  delay(250);
}
