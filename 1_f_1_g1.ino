int boton = 2;
int buzz = 3;

void setup() {
  pinMode(boton, INPUT_PULLUP); 
  pinMode(buzz, OUTPUT);
}

void loop() {
  if (digitalRead(boton) == LOW) { 
    digitalWrite(buzz, HIGH);
    delay(500); 
    digitalWrite(buzz, LOW);
    delay(500); 
  } else {
    digitalWrite(buzz, LOW); 
  }
}
