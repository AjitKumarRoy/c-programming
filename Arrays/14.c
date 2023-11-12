//Create a 2-D array, storing the tables of 2 and 3

#include <stdio.h>

void storeTable(int arr[][10], int m, int number);

int main() {
    int tables[2][10];
    storeTable(tables, 0, 3);
    storeTable(tables, 1, 6);

    for (int i = 0; i < 10; i++) {
        printf("%d ", tables[0][i]);
    }
    printf("\n");
    for (int j = 0; j < 10; j++) {
        printf("%d ", tables[1][j]);
    }
    return 0;
}

void storeTable (int arr[][10], int m, int number) {
    for (int i = 0; i < 10; i++) {
        arr[m][i] = number * (i+1);
    }
}