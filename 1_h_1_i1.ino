#define LED_R 3
#define LED_A 2
#define LED_V 1

int boton_actual = 0;      
int boton_antes = 0;   
int led_actual = 0;          

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_A, OUTPUT);
  pinMode(LED_V, OUTPUT);
  pinMode(4, INPUT_PULLUP);
}

void loop() {
  
  boton_actual = digitalRead(4);
  
  if (boton_actual == HIGH && boton_antes == LOW) 
  {
    
  led_actual++;
    
    if (led_actual > 7) 
    {
      led_actual = 0;  
    }
    delay(50);  
  }
  
 
  if (led_actual == 0) {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_V, LOW);
  } else if (led_actual == 1) {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_V, LOW);
  } else if (led_actual == 2) {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_V, HIGH);
  } else if (led_actual == 3) {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_V, HIGH);
  } else if (led_actual == 4) {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_V, LOW);
  } else if (led_actual == 5) {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_V, LOW);
  } else if (led_actual == 6) {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_V, HIGH);
  } else if (led_actual == 7) {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_V, HIGH);
  }

  boton_antes = boton_actual;
}