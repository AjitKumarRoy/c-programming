//write a program to insert an element in an array at a specific position.

#include <stdio.h>
#define MAX_SIZE 100

int insertElement(int arr[], int size, int position, int element);

int main() {
    int arr [MAX_SIZE];

    int size, element, position;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted in the array : ");
    scanf("%d",&element);

    printf("At which position you want to eneter the element : ");
    scanf("%d", &position);

    //update the size of array
    size = insertElement(arr, size, position, element);

    //printing the updated array
    printf("Element inserted successfully.\nUpdated array : ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}

int insertElement(int arr[], int size, int position, int element) {
    if (position >= MAX_SIZE) {
        printf("Position is out of range\n");
        return size;
    }

    if (size >= MAX_SIZE) {
        printf("Array is full\n");
        return size;
    }

    //shifting the element
    for (int i = size - 1; i >= position; i--) {
        arr[i+1] = arr[i];
    }

    //inserting the element
    arr[position] = element;

    return size + 1;    
}