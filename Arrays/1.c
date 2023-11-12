//array
//Syntax
//int marks[3]; int takes 4 bytes
//char name[10]; char takes 1 byte
//float price[2];
//in c arrays are 0 based indexing

#include <stdio.h>

int main() {
    int marks[3];

    printf("Enter Physics : ");
    scanf("%d",&marks[0]);

    printf("Enter Chem : ");
    scanf("%d",&marks[1]);

    printf("Enter Math : ");
    scanf("%d",&marks[2]);

    printf("Phy = %d, Chem = %d, Math = %d",marks[0], marks[1], marks[2]);

    return 0;
}
