#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define POTE_PIN A0
#define BUZZER_PIN 12
#define PIN_ROJO 5
#define PIN_AZUL 6
#define PIN_VERDE 7
LiquidCrystal_I2C lcd(0x23, 16, 2);

void setup()
{ Serial.begin(9600);
  Wire.begin();
  pinMode (POTE_PIN, INPUT);
  pinMode (PIN_ROJO, OUTPUT);
  pinMode (PIN_AZUL, OUTPUT);
  pinMode (PIN_VERDE, OUTPUT);
  pinMode (BUZZER_PIN, INPUT);
  lcd.init();
  lcd.backlight();

}

void loop()
{ int valor = analogRead(POTE_PIN);
 int intensidad = map(valor, 0, 1023, 0, 255);
 int frecuencia = map(valor, 0, 1023, 200, 1000);
 int colores [3] = {intensidad, 255 - intensidad ,intensidad /2};
 analogWrite(PIN_ROJO, colores [0]);
 analogWrite(PIN_AZUL, colores [1]);
 analogWrite(PIN_VERDE, colores [2]);
 tone(BUZZER_PIN, frecuencia);
  
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print ("potenciometro: " );
 lcd.setCursor(0, 1);
 lcd.print ("frecuencia: " );
 lcd.print (frecuencia );
 delay (200);
 
}

