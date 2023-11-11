//pointers
//pointer(ptr) mei store hota hai address of variable
//(*ptr)--> pointer variable (ptr) ke aage asterisk lagane se value of the address storedd in ptr variable print hota hai

#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age; // asterisk(*) ka matlab hai value at address 
    // AND(&) ka matlab hai address of variable

    //print address
    printf("%p\n",&age);
    printf("%u\n",&age); // printing the address in unsigned int
    printf("%u\n",ptr); // printing ptr which contains the address of age
    printf("%u\n",&ptr); //printing addresss of ptr

    return 0;
}