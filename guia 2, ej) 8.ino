#define LED_PIN 3
#define BUTTON_PIN 4

const int maxDatos = 5;
int datos[maxDatos];
int posicionVEC = 0;

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
  if (posicionVEC < maxDatos) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);

    while (digitalRead(BUTTON_PIN) == HIGH) {
    }

    digitalWrite(LED_PIN, LOW);
    delay(500);

    if (digitalRead(BUTTON_PIN) == LOW) {
      datos[posicionVEC] = 1;
    } else {
      datos[posicionVEC] = 0;
    }
    posicionVEC++;

    while (digitalRead(BUTTON_PIN) == LOW) {
    }

    delay(1000);
  } else {
    Serial.print("Secuencia: ");
    for (int i = 0; i < maxDatos; i++) {
      Serial.print(datos[i]);
      if (i < maxDatos - 1) {
        Serial.print(", ");
      }
    }
    Serial.println();

    posicionVEC = 0;
    delay(2000);
  }
}