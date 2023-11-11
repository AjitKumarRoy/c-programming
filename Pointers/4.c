//pointer to pointer 
//**pptr

#include <stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price; // here ptr stores the address of price
    float **pptr = &ptr; // here pptr stores the address of ptr
    //and ptr stores the address of price

    printf("%d\n",price); // value stored at price
    printf("%d\n",&price); // address of price
    printf("%d\n",ptr); // address stored at ptr i.e. address of price
    printf("%d\n",*ptr); //value stored at the address i.e value of price
    printf("%d\n",&ptr); 
    printf("%d\n",pptr); //address stored at pptr i.e address of ptr
    printf("%d\n",&pptr); // address of pptr
    printf("%d\n",**pptr); //value of price 

    return 0;
}