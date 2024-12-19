void setup() 
{
    Serial.begin(9600);
    
    int ladosDelDado = 6;  
    int resultado = lanzarDado(ladosDelDado);
    
    Serial.print("Lanzaste un dado de ");
    Serial.print(ladosDelDado);
    Serial.print(" lados y obtuviste: ");
    Serial.println(resultado);
}

void loop()
{
    
}

int lanzarDado(int lados) {
    randomSeed(analogRead(0));  
    return random(1, lados + 1); 
}