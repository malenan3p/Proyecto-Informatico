
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(2500);
  digitalWrite(2, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(4, LOW);
  delay(400);
  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(4, LOW);
  delay(400);
  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(4, LOW);
  delay(400);
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);
  delay(2500);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
 
  
}