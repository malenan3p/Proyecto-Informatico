void setup() 
{
    Serial.begin(9600);
}

bool esMultiplo(int a, int b) {
    return (a % b == 0);
}

  void loop() 
  {
    int num1 = 10;  
    int num2 = 5;  

    if (esMultiplo(num1, num2)) {
        Serial.print(num1);
        Serial.print(" es multiplo de ");
        Serial.println(num2);
    } else {
        Serial.print(num1);
        Serial.print(" NO es multiplo de ");
        Serial.println(num2);
    }
    delay(2000);
} 