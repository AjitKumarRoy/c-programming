//array can be passed through a function
//array mei call by reference hota hai kyuki array ek pointer hai

#include <stdio.h>

void printarr(int arr[], int n);
void _printarr(int *arr, int n);



int main() {
    int arr[] = {14, 25, 23, 23, 22};
    _printarr(arr, 5);

    return 0;
}

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n",arr[i]);
    }
}

void _printarr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}