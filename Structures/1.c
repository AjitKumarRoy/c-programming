//Collection of Data-Types
//Integers ka collection --> Integer array
//Characters ka collection --> String

//Structures ---> a collection of values of different data-types

/*
Syntax:--
struct student {
    char name[100];
    int roll;
    float cgpa;
}
*/

//in-built dataTypes :- int, char, float
//user-defined dataTypes :- structures

//Structures are stored in contiguous memory locations 
// yaani ek ke baad ek



#include <stdio.h>
#include <string.h>

//user-defined data type
struct student {
    int roll;
    float cgpa;
    char name[100];
};


int main() {
    struct student s1;
    //s1 is a variable of structure type
    s1.roll = 23;
    s1.cgpa = 5.2;
    //s1.name = "Ajit";
    strcpy(s1.name,"Ajit");

    printf("Student name : %s\n",s1.name);
    printf("Student roll : %d\n",s1.roll);
    printf("Studen cgpa : %.2f\n",s1.cgpa);

    return 0;
}

