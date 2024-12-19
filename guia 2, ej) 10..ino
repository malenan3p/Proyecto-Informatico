#define PIN_ENTRADA 2
#define PIN_SALIDA 4

void configurarPines() 
{
    pinMode(PIN_ENTRADA, INPUT);
    pinMode(PIN_SALIDA, OUTPUT);
}

void setup()
{
    configurarPines();
}

void loop() 
{
    int estado = digitalRead(PIN_ENTRADA);
    
    if (estado == HIGH) {
        digitalWrite(PIN_SALIDA, HIGH);
    } else {
        digitalWrite(PIN_SALIDA, LOW);
    }
}