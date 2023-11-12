//Standard Library Function to print the length of a string
//strlen(str) -->count number of characters excluding '\0' null character

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name : ");
    fgets(name, 100, stdin);

    printf("Length is : %d",(int)strlen(name));

    return 0;
}