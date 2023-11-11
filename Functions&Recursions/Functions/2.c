//write a function that prints namaste if the user if indian and bonjour in the user if french

#include <stdio.h>

void printNamaste();
void printBonjour();

int main() {
    printf("Enter 'f' for french and 'i' for indian : ");
    char ch;
    scanf("%c",&ch);

    if (ch == 'i') {
        printNamaste();
    } else if (ch == 'f') {
        printBonjour();
    } else {
        printf("Other Nationality");
    }
    return 0;
}

void printNamaste() {
    printf("Namaste...");
}

void printBonjour() {
    printf("Bonjour..");
}