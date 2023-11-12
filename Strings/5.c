//Ask the user to enter their first name and print it back to them.
//Also try with the full name

//gets(str) ----> Inputs a String even if it is multiword // it is dangerous & outdated
//puts(str) ----> Outputs a String.

#include <stdio.h>

int main() {
    //input & output full name
    char name[100];
    printf("Enter your full name : ");
    gets(name);
    puts(name);

    return 0;
}