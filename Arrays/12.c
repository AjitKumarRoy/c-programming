// Write a function to reverse an array

#include <stdio.h>

void revereArr(int arr[], int n);

int main()
{
    int arr[] = {22, 33, 44, 55, 66};
    int n = 5;

    //calling revereArr() function
    revereArr(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }


    return 0;
}

void revereArr(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}