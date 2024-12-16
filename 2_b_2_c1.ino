void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  analogWrite(0, 0);
  analogWrite(1, 36);
  analogWrite(2, 72);
  analogWrite(3, 109);
  analogWrite(4, 145);
  analogWrite(5, 182);
  analogWrite(6, 218);
  analogWrite(7, 255);
}