//Delete an element from an array

#include <stdio.h>
#define MAX_SIZE 100

void deleteElement(int arr[], int size, int position);

int main() {
    int arr[MAX_SIZE];

    int size, position;

    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter elements of the array : ");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    printf ("Enter positon to be deleted : ");
    scanf("%d",&position);

    deleteElement(arr, size, position);
    size--;
    //print the updated array;

    printf("Updated array : ");
    for (int i = 0; i < size ; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;

}

void deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position for deletion.\n");
        return ;
    }

    for (int i = position; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
}