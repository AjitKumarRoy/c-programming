//Swap two numbers a & b

#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {

    int a = 4; 
    int b = 8;

    printf ("a = %d\n",a);
    printf ("b = %d\n",b);

    swap(a, b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    _swap(&a, &b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}

//call by value
void swap(int a, int b) {
    int temp = b;
    b = a;
    a = temp;

    printf("a = %d, b = %d\n", a, b);
}


//call by reference --> it is used when we have to return multiple values from a function
void _swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}