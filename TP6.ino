#define LED_R 3   // Pin para el LED rojo
#define LED_G 2   // Pin para el LED verde
#define LED_B 1   // Pin para el LED azul

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  for (int rojo = 0; rojo <= 255; rojo++) {
    for (int verde = 0; verde <= 255; verde++) {
      for (int azul = 0; azul <= 255; azul++) {
        analogWrite(LED_R, rojo);   
        analogWrite(LED_G, verde); 
        analogWrite(LED_B, azul);    
        
        delay(1); 
      }
    }
  }
}
