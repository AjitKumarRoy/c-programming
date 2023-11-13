//malloc()

//-> takes number of bytes to be allocated & return a pointer of type void

//Syntax :- ptr = (int*)malloc(5*sizeof(int));
//sizeof(datatype) --> sizeof() functions returns the size of any datatype
//(int*) --> ye integer mei type cast kar raha hai

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d\n",ptr[i]);
    
    }

    return 0;
}