# TP-N-1-Escrituras
// C++ code
//


void setup()
{

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
    Serial.begin(9600);
  
}

void loop()
{
   
  analogWrite(2, 255);
  delay(1000); 
  analogWrite(2, 0); 
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  delay(1000);
  digitalWrite(7, HIGH);
  delay(500);
  analogWrite(7, LOW); 
  digitalWrite(3 , LOW);
  digitalWrite(4 , LOW);
  analogWrite(5, 150);
  analogWrite(6, 150);  
  delay(1000); 
  analogWrite(7, LOW);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  
}
