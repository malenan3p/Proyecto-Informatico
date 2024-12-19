#define BUZZ 2

void setup() 
{
  Serial.begin(9600);
  pinMode(BUZZ, OUTPUT);
  randomSeed(analogRead(0));

  int numeros[10];
  bool encontrado = false;

  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11);
    Serial.print(numeros[i]);
    Serial.print(" ");
    
    if (numeros[i] == 5) {
      encontrado = true;
    }
  }
  Serial.println();

  if (encontrado) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(BUZZ, HIGH);
      delay(200);
      digitalWrite(BUZZ, LOW);
      delay(200);
    }
  }
}

void loop() 
{

}