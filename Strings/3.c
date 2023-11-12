//String Format Specifier

#include <stdio.h>

int main() {
    //print

    char name[] = "Ajit";
    printf("%s\n", name);

    //input through scanf
    char address[50];
    scanf("%s", &address); // it takes input a word only
    printf("%s",address);
}