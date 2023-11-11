//Use library function to calculate the square of a number given by user

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    printf("%d",(int)pow(a,4));
}

