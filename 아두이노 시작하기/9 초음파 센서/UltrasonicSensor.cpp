// C++ code

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // 초음파 신호 전송
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW); // 초기화
  delayMicroseconds(2);
  digitalWrite(9, HIGH);
  delayMicroseconds(5);
  digitalWrite(9, LOW);

  // 초음파 신호 수신
  pinMode(9, INPUT);
  float duration = pulseIn(9, HIGH);
  float cm = duration * 340 / 10000 / 2;
  Serial.println(cm);
}