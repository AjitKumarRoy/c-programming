//Write a program to create and display containing 5 elements.

#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements for the array : ");
    for (int i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Elements of the array : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}