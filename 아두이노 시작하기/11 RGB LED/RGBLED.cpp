// C++ code

void setup()
{
  pinMode(11, OUTPUT); // red
  pinMode(10, OUTPUT); // blue
  pinMode(9, OUTPUT); // green
}

void loop()
{
  analogWrite(11, random(256));
  analogWrite(10, random(256));
  analogWrite(9, random(256));
  delay(100);
}