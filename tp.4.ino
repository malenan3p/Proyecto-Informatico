#define RGB_R 9  
#define RGB_A 10 
#define RGB_V 11 

#define LDR A1
#define TMP A0

#define MSG(a,b) Serial.print(a); Serial.println(b);

void setup()
{
  pinMode(LDR, INPUT);
  pinMode(TMP, INPUT);
  pinMode(RGB_R, OUTPUT);
  pinMode(RGB_A, OUTPUT);
  pinMode(RGB_V, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ldr = analogRead(LDR);
  int luz = map(ldr, 0, 310, 100, 0);  
  
  int t = analogRead(TMP); 
  float senial = t * 5.0 / 1024;  
  float temperatura =  senial * 100 - 50;

  MSG("El nivel de luz actual es: ", luz);
  MSG("y la temperatura actual: ", temperatura);
  delay(650);

  if (luz >= 30 && luz <= 70)
  {
    if (temperatura > 90)
    {
      digitalWrite(RGB_R, HIGH);
      digitalWrite(RGB_A, LOW);
      digitalWrite(RGB_V, LOW);
    }
    else if (temperatura < 18)
    {
      digitalWrite(RGB_R, LOW);
      digitalWrite(RGB_A, LOW);
      digitalWrite(RGB_V, HIGH);
    }
    else
    {
      digitalWrite(RGB_R, LOW);
      digitalWrite(RGB_A, HIGH);
      digitalWrite(RGB_V, LOW);
    }
  }
  else
  {
    digitalWrite(RGB_R, LOW);
    digitalWrite(RGB_A, LOW);
    digitalWrite(RGB_V, LOW);
  }

  delay(1000);
}
