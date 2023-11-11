//print table of n

#include <stdio.h>

void table(int n);

int main() {
    int a;
    printf("Print multiplication table of any number : ");
    scanf("%d", &a);

    //calling table function
    table(a);
    return 0;
}

void table (int n) {//parameter or formal paramter
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n,i,n*i);
    }
}