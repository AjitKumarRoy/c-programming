//Ask the user to enter their first name and print it back to them.
//Also try with the full name

//gets(str) ----> Inputs a String even if it is multiword // it is dangerous & outdated
//puts(str) ----> Outputs a String.

//fgets(str, n, stdin), wher str  is string, n is size of strng 
//and stdin is standard input. ---> It stops when n-1 chars input 
// or new line is entered.

#include <stdio.h>

int main() {
    //input & output full name
    char name[100];
    printf("Enter your full name : ");
    fgets(name, 100, stdin);
    puts(name);

    return 0;
}