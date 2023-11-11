//sum of a and b

#include <stdio.h>

int sum (int a, int b);

int main() {
    int a, b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    int ans = sum(a,b);
    printf("Sum is : %d",ans);
    return 0;
}

int sum (int a, int b) {
    return a+b;
}