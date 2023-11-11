//Write a function to convert Celsius to Fahrenheit

#include <stdio.h>

float celsiusToFahrenheit(float num);

int main() {
    printf("Celsisus to Fahrenheit : %f F.\n", celsiusToFahrenheit(100));
    
    return 0;
}

float celsiusToFahrenheit(float num) {
    return ((num *(9.0/5))+32);
}