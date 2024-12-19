#define led1  2
#define led2  3
#define led3  4
#define led4  5
#define led5  6

#define NUM_LEDS 5

int pinesLED[NUM_LEDS] = { led1, led2, led3, led4, led5 };

void setup()
{
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(pinesLED[i], OUTPUT);
  }
}

void loop() 
{
  for (int i = 0; i < NUM_LEDS; i++) {
    analogWrite(pinesLED[i], 255); 
    delay(200); 
    analogWrite(pinesLED[i], 0); 
  }
  
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    analogWrite(pinesLED[i], 255);
    delay(200);
    analogWrite(pinesLED[i], 0);
  }
}