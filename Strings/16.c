//Write a function to count the occurence of vowels in a String

#include <stdio.h>
#include <string.h>

int countVowels(char str[]);

int main() {
    char str[] = "aeiouaeiouxyz";

    int ans = countVowels(str);
    printf("%d",ans);

    return 0;
}

int countVowels(char str[]) {
    int count = 0;

    for (int i = 0 ; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u') {
            count++;
        }
    }

    return count;
}