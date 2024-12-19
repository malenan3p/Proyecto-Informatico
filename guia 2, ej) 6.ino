#define LONGITUD(v) (sizeof(v) / sizeof(v[0]))

void setup() 
{
  Serial.begin(9600);
  
  int numeros[] = {2, 6, 10, 11};
  int longitud = LONGITUD(numeros);
  
  for (int i = 0; i < longitud; i++) {
    Serial.print("Multiplos de ");
    Serial.print(numeros[i]);
    Serial.println(":");
    
    for (int j = 1; j <= 5; j++) {
      Serial.print(numeros[i] * j);
      Serial.print(" "); 
    }
    Serial.println(); 
  }
}

void loop() 
{
  
}