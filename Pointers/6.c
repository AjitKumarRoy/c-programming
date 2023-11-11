//pointer in function

#include <stdio.h>

void square(int n);
void _square(int* n);

int main() {
    int number = 4;
    square(number);
    printf("number = %d\n",number);
    
    _square(&number); // here we are passing the address of the variable
    printf("number = %d\n",number);

    return 0;
}

//call by value --> we pass vaue of the variable as argument
void square(int n) {
    n = n*n;
    printf("square = %d\n",n);
}

//call by reference --> we pass address of variable as argument
void _square(int* n) {
    //here we are taking pointer, matlab yaha koi variable ka address aane wala hai
    *n = (*n)  * (*n); // 4*4
    printf("sqaure = %d\n",*n);
}