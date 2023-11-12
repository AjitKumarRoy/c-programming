//Standard Library function
//strcpy(newStr, oldStr); ---> copies value of old string to new string.

#include <stdio.h>
#include <string.h>

int main() {
    char oldStr[] = "Hello";
    char newStr[] = "World";

    strcpy(newStr,oldStr);
    printf("%s\n",oldStr);
    printf("%s\n",newStr);

    return 0;
}