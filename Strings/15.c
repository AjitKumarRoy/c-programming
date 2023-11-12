//Write a function named slice, which takes a string & return a sliced string from index n to m.

#include <stdio.h>

void slice(char str[], int n, int m);

int main() {
    char name[] = "Ajit Kumar Roy";
    slice(name,0,5);
    return 0;
}

void slice(char str[], int n, int m) {
    char newStr[100];

    int a = 0;

    for (int i = n; i <= m; i++) {
        newStr[a] = str[i];
        a++;
    }
    newStr[a] = '\0';
    puts(newStr);
}