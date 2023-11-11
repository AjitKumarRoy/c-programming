//write a function to print nth term of the fibonacci sequence

#include <stdio.h>

int fibonacci(int n);

int main() {
    printf("Enter a number : ");
    int a;
    scanf("%d",&a);

    printf("%d fibonacci term : %d",a, fibonacci(a));
    return 0;
}

int fibonacci(int n) {
    if (n == 1){
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}