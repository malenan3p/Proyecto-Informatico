#include <LiquidCrystal.h>

LiquidCrystal LCD(2, 4, 6, 7, 8, 9);

byte cor[] = 
{
  B10101,
  B11111,
  B10101,
  B11011,
  B01110,
  B11111,
  B11111,
  B01010
};

void setup() 
{
  LCD.createChar(0, cor);
  LCD.begin(16, 2);
  
  randomSeed(analogRead(A0));
  
  bienvenida();
  delay(2000);
}

void loop()
{
  inicioJuego();
  delay(2000);
  
  int puntos = random(0, 100);
  finJuego(puntos);
  
  delay(5000);
}

void bienvenida() 
{
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Bienvenido!");
  LCD.setCursor(0, 1);
  LCD.print("Preparando...");
}

void inicioJuego() 
{
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Inicio de");
  LCD.setCursor(0, 1);
  LCD.print("Juego!");
}

void finJuego(int puntos) 
{
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Fin de Juego!");
  LCD.setCursor(0, 1);
  LCD.print("Puntuacion: ");
  LCD.print(puntos);
}