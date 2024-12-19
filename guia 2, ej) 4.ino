#define led 3

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};
  int longitud = sizeof(secuencia) / sizeof(secuencia[0]);
  
  for (int i = 0; i < longitud; i++) {
    if (secuencia[i] == 1) {
      digitalWrite(led, HIGH);  
    } else {
      digitalWrite(led, LOW);   
    }
    delay(500);  
  }
}