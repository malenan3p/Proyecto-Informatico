int numeros[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

void setup() 
{
  Serial.begin(9600);
  
  float media = calcularMedia(numeros, sizeof(numeros) / sizeof(numeros[0]));
  Serial.println("La media es: " + String(media));
}

void loop() 
{
 }

float calcularMedia(int arr[], int size) {
  float suma = 0;

  for (int i = 0; i < size; i++) {
    suma += arr[i];
  }

  return suma / size;
}