//print array in reverse order.

#include <stdio.h>

void reverseArr(int arr[], int size);

int main() {
    int size;

    printf("Enter size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of array : ");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    //calling the reverseArr function

    reverseArr(arr, size);

    //printing the updated arry
    printf("Updated array : ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    return 0;

}


//function to reverse the array

void reverseArr(int arr[], int size) {
    int start = 0;
    int end = size-1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}