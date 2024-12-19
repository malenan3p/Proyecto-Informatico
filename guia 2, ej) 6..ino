#define length(v) (sizeof(v) / sizeof(v[0]))

void activarPines(int pines[], int cantidad) 
{
    for (int i = 0; i < cantidad; i++) {
        pinMode(pines[i], OUTPUT); 
        digitalWrite(pines[i], HIGH); 
    }
}

void setup() 
{
    int pines[] = {2, 3, 4, 5}; 
    int cantidad = length(pines); 
    activarPines(pines, cantidad); 
}

void loop() 
{
    
}