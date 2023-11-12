//Pointer Arithmetic

#include <stdio.h>

int main() {
    int age = 22;
    int _age = 23;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u differece = %u\n",ptr,_ptr,ptr-_ptr);
    //we can also subtract one pointer from another
    //difference datatype ka aata hai
    //aur alag-alag datatype ka difference hum nhi nikal sakte
    //dono ke andar ek integer ka difference hai isiliye 1 print hua

    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);
    //we can also compare two pointers

    return 0;
}