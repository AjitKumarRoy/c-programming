//Check if a given character is present in a string or not

#include <stdio.h>
#include <string.h>

int checkChar(char str[], char ch);

int main() {
    char str[] = "Ajit Kumar Roy";
    char ch = 'z';

    //calling checkChar function 
    int ans = checkChar(str, ch);

    if (ans == 1) {
        printf ("Yes the character is present in the string\n");
    } else {
        printf("NO the character is not present in the String\n");
    }

    return 0;
}

int checkChar(char str[], char ch) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            return 1;
        }
    }
    return 0;
}