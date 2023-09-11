// C++ code

void setup()
{
  Serial.begin(9600); // 통신속도 초당 9600bit
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  int readValue = digitalRead(2);
  Serial.println(readValue);

  if (readValue == HIGH) {
    digitalWrite(8, HIGH);
  }
  else {
  	digitalWrite(8, LOW);
  }
}