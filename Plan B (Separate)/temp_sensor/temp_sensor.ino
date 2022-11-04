#include <math.h>
void setup()
{
   Serial.begin(9600);
}
void loop()
{
  double val=analogRead(3);
  double fenya=(val/1023)*5;
  double r=(5-fenya)/fenya*4700;
  Serial.println(val);
  delay(1000);
}
