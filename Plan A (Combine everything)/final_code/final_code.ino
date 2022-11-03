int humid = 5;
int water = 4;
int photon = 2;
int temp = 0 ;  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(humid , OUTPUT);
  pinMode(water , OUTPUT);
  pinMode(photon , OUTPUT);
  pinMode(temp , OUTPUT);
}

int analogReadhumid()
{
  digitalWrite(humid, HIGH);
  digitalWrite(humid, LOW);
  return analogRead(0);
}
int analogReadwater()
{
  digitalWrite(water, HIGH);
  digitalWrite(water, LOW);
  return analogRead(0);
}
int analogReadphoton()
{
  digitalWrite(photon, HIGH);
  digitalWrite(photon, LOW);
  return analogRead(0);
}
int analogReadtemp()
{
  digitalWrite(temp, HIGH);
  digitalWrite(temp, LOW);
  return analogRead(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int h = analogReadhumid();
  delay(200);
  int w = analogReadwater();
  delay(200);
  int p = analogReadphoton();
  delay(200);
  int t = analogReadtemp();
  delay(200);
  Serial.print("humid = ");
  Serial.print(h);
  Serial.print("\n");

  Serial.print("water = ");
  Serial.print(w);
  Serial.print("\n");

  Serial.print("photon = ");
  Serial.print(p);
  Serial.print("\n");

  Serial.print("temp = ");
  Serial.print(t);
  Serial.print("\n");
}
