void setup() {
  pinMode(9, OUTPUT);  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT); 

  pinMode(4, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT); 
}

void loop() {
  
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);

  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1000);

  
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);

  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);

  
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1000);

  
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(1000);

  
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);

  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1000);

  
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);

  
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(1000);
}
