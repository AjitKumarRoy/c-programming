//write a program to allocate memory to store 5 prices

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    ptr = (float*)malloc(5*sizeof(float));

    ptr[0] = 42;
    ptr[1] = 32;
    ptr[2] = 23;
    ptr[3] = 65;
    ptr[4] = 34;
    

    for (int i = 0; i < 5; i++) {
        printf("%f\n",ptr[i]);
    }

    return 0;
}