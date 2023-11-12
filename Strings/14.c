//Salting
//Find the salted form of the password entered by user if the salt is "123"
// added at the end.

#include <stdio.h>
#include <string.h>

void salting(char pass[]);

int main() {
    printf("Enter a password : ");
    char pass[100];
    scanf("%s",pass);

    //calling Salting ;
    salting(pass);

    return 0;
}

void salting(char pass[]) {
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, pass);
    strcat(newpass, salt);
    puts(newpass);
}