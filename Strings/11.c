//Standard Library function
//Concatenation
//strcat(firstStr, secStr); ------> concatenates first string with second string.
//second string ---> first string ke sath jurr jata hai

//there is no space in concatenation

#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[] ="Hello ";
    char secStr[] = "World";

    strcat(firstStr,secStr);
    puts(firstStr);

    return 0;
}