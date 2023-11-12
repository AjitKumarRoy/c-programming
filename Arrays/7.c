//Array is a pointer
//int *ptr = &arr[0];
//int *ptr = arr;

//both the lines have same meaning

#include <stdio.h>

int main() {
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];

    for (int i = 0; i < 5; i++) {
        printf("%d index : ",i);
        scanf("%d",(ptr+i)); // (ptr + i) iske jagha &aadhar[i] use karte hai hum normally 
    }

    //output
    for (int i = 0; i < 5; i++) {
        printf("%d index = %d\n",i,*(ptr+i)); //*(ptr+i) iske jagha aadhar[i] use karte hai hum normally
    }

    return 0;
}