#define LED_R 2
#define LED_B 3
#define LED_G 4

int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {200, 255, 12};

int* colores[] = {L1, L2, L3};

void setup() 
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  
  Serial.begin(9600);
}

void loop() 
{
  for (int i = 0; i < 3; i++) {
    mostrarColor(colores[i]);
    delay(1000);
  }
}

void mostrarColor(int* color) {
  analogWrite(LED_R, color[0]);
  analogWrite(LED_G, color[1]);
  analogWrite(LED_B, color[2]);
  
  Serial.print("Color: R=");
  Serial.print(color[0]);
  Serial.print(", G=");
  Serial.print(color[1]);
  Serial.print(", B=");
  Serial.println(color[2]);
}