//pointers
//& --> address
//* --> value at the address

#include <stdio.h>

int main() {
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; //x=0

    printf("x = %d\n",x);//0
    printf("*ptr = %d\n",*ptr);//0

    *ptr += 5; //*ptr = *ptr + 5; // means, x = x + 5// *ptr mtlb hamara variable hai

    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);


    (*ptr)++;
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);




    return 0;
}