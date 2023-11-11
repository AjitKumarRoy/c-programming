//sum of first N natural numbers

#include <stdio.h>

int sum(int n);

int main() {
    //calling sum function
    printf("Sum : %d",sum(100));
    return 0;
}

//function to calculate the sum of first N natural numbers
int sum(int n) {
    if (n == 1) {
        return 1;
    }

    return n+sum(n-1);
}