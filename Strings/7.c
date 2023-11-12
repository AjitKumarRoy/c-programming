//String using pointers

//char *str = "Hello World"; -----> Can be reinitialized matlab change kar
//sakte hai agar pointer ke madat se string banaya hai toh
//char arr[] = "Hello Word"; -----> Cannot be reinitialized matlab change 
//nhi kar sakte hai.

#include <stdio.h>

int main() {
    char *canChange = "Hello World";
    puts(canChange);

    canChange = "Hello"; //string changed
    puts(canChange);


    char cannotChange[] = "Hello World";
    puts(cannotChange);
    //cannotChange = "hello"; //error

    return 0;
}