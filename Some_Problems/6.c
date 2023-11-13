//binary Search

#include <stdio.h>

int binarySearch(int arr[], int target, int length);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 10;
    int length = 10;

    //calling binarySearch function
    int ans = binarySearch(arr, target, length);
    printf("%d", ans);

    return 0;
}

int binarySearch(int arr[], int target, int length) {
    int start = 0;
    int end = length-1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        //check if the element at mid is equal to the target
        if (target == arr[mid]) {
            return mid;
        }

        //check if target is less than the middle element
        else if (target < arr[mid]) {
            end = mid - 1;
        }

        //check if target is greater than the middle element
        else {
            start = mid + 1;
        }
    }
    //return -1 if target not found
    return -1;
}