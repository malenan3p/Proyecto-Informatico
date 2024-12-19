#define length(v, tipo) (sizeof(v) / sizeof(tipo))

void ordenarVectorDescendente(int vector[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vector[j] < vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

void setup() 
{
    Serial.begin(9600);
    int vector[] = {5, 2, 9, 1, 5, 6};
    int n = length(vector, int);
    ordenarVectorDescendente(vector, n);
    for (int i = 0; i < n; i++) {
        Serial.print(vector[i]);
        Serial.print(' ');
    }
    Serial.println();
}

void loop() 
{
}