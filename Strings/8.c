//Make a program that input's user's name and prints its length;

#include <stdio.h>

int nameLength(char name[]);

int main() {
    char name[100];
    printf("Enter your name : ");
    fgets(name, 100, stdin);

    //calling name length function
    int ans = nameLength(name);
    printf("%d",ans);

    return 0;
}

int nameLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}