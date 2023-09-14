// C++ code

void setup()
{
  pinMode(13, INPUT);
  pinMode(8, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int value = digitalRead(13);
  Serial.println(value);

  if (value == HIGH) {
  	digitalWrite(8, HIGH);
    delay(2000);
  	digitalWrite(8, LOW);
  }
}