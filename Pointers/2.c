//pointers

#include <stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;

    //asterisk(*) ka matlab hai value at address 
    //AND(&) ka mtlb hai address of variable

    printf("%d\n",ptr);
    printf("%d\n",&age);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

    return 0;
}