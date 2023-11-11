//Factorial of N

#include <stdio.h>

int factorial(int n);

int main() {
    printf("Enter a number : ");
    int a;
    scanf("%d",&a);

    printf("Factorial of %d : %d",a,factorial(a));
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}