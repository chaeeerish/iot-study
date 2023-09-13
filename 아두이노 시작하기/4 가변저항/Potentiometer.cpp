// C++ code

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int readValue = analogRead(A0);
  int y = map(readValue, 0, 1023, 0, 10);
  Serial.println(y);
}