//2-D array

#include <stdio.h>

int main() {
    //2x3 matrix which stores marks of three subjects of 2 students

    int marks[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("(%d, %d) index : ", i, j);
            scanf("%d",&marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}