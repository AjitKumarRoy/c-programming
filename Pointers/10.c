//Write a function to calculate the sum, product & average of 2 numbers. 
//print that average in the main function
//yeha pe hame 3 value return karna hai, lekin function toh ek hi value return karta hai
//isiliye hum yeha pe pointer use karenge, kyuki pointer multiple values
//return karta hai

#include <stdio.h>

void doWork(int a, int b, int *sum, int *product, int *average);

int main() {
    int a = 5;
    int b = 15;

    int sum, product, average;

    doWork(a,b, &sum, &product, &average);
    printf("Sum = %d, product = %d, average = %d", sum, product, average);

}

void doWork(int a, int b, int *sum, int *product, int *average) {
    *sum = a + b;
    *product = a * b;
    *average = (a * b) / 2;
}