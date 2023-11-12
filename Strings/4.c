//Ask the user to enter their first name and print it back to them.

//scanf() cannot iput multi-word strings with spaces

//Also try with the full name

#include <stdio.h>

int main() {
    //input & output first name
    char firstName[50];
    printf("Enter your first name : ");
    scanf("%s",&firstName); //input
    printf("%s",firstName); //output


    return 0;
}