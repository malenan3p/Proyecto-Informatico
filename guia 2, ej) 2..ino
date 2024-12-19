#define TRIGGER_PIN 5
#define ECHO_PIN 3

void setup() 
{
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() 
{
  int distance = obtenerDistancia();
  Serial.print("Distancia actual: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
}

int obtenerDistancia() 
{
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  return duration * 0.034 / 2;
}