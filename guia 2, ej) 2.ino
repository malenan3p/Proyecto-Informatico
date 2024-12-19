#define LONGITUD(v) (sizeof(v) / sizeof(v[0]))

void setup()
{
  Serial.begin(9600);
  
  int valores[] = {10, 4, 2};
  int longitud = LONGITUD(valores);
  
  for (int i = 0; i < longitud - 1; i++) {
    for (int j = i + 1; j < longitud; j++) {
      if (valores[i] > valores[j]) {
        int temp = valores[i];
        valores[i] = valores[j];
        valores[j] = temp;
      }
    }
  }

  for (int i = 0; i < longitud; i++) {
    Serial.println(valores[i]);
  }
}

void loop() 
{
  
}