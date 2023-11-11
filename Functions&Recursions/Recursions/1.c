//print hello world 5 times with the help of recursion

#include <stdio.h>

void printHello(int num);

int main() {
    //calling printHello function
    printHello(10);
    return 0;
}

//function to print hello world

void printHello(int num) {
    if (num == 0) {
        return;
    }

    printf("Hello World \n");
    printHello(num-1);
}