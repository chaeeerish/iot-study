// C++ code

#include <Servo.h>

Servo s1;

void setup()
{
  s1.attach(13, 544, 2500);
}

void loop()
{
  s1.write(180);
  delay(20);
}