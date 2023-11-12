//Create a String firstName & lastName to store details of user & print 
//all the characters using loop

#include <stdio.h>

void printString(char arr[]);

int main() {
    char firstName[] = "Ajit";
    char lastName[] = "Roy";

    printString(firstName);
    printString(lastName);
    
    return 0;
}

void printString(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
}
