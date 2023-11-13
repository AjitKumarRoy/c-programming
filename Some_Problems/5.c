//linear search

#include <stdio.h>

int linearSearch(int arr[], int target, int length);

int main() {
    int arr[] = {12, 32, 5, 2, 55, 23, 52};
    int target = 52;
    int length = 7;

    //calling linearSearch function
    int ans = linearSearch(arr, target, length);
    printf("%d",ans);

    return 0;
}

int linearSearch(int arr[], int target, int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}