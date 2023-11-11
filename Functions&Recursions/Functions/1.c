//write two function one to print hello and second to print goodbye

#include <stdio.h>

//declaration or prototype
void printHello();
void printGoodBye();

int main()
{
    printHello(); //function call
    printGoodBye();
}


//function definition
void printHello() {
    printf("Hello\n");
}

void printGoodBye() {
    printf("GoodBye");
}