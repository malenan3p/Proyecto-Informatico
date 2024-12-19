void setup() 
{
    Serial.begin(9600);
    int vec[5]; 

    llenarVectorConMultiplosDe10(vec);

    Serial.print("multiplos de 10: ");

    for (int i = 0; i < 5; ++i) {
        Serial.print(vec[i]);
        Serial.print(" ");
    }
    Serial.println();
}

void loop() 
{

}


void llenarVectorConMultiplosDe10(int vec[5]) 
{

    randomSeed(analogRead(0)); 

    for (int i = 0; i < 5; ++i) {

        int numeroAleatorio = random(0, 10); 
        vec[i] = numeroAleatorio * 10; 
    }
}