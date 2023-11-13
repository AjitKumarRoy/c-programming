//Write a program to store the data of 3 students

#include <stdio.h>
#include <string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.roll = 1;
    s1.cgpa = 55.5;
    strcpy(s1.name,"Ajit");

    struct student s2;
    s2.roll = 2;
    s2.cgpa = 59.5;
    strcpy(s2.name,"Sujit");

    struct student s3;
    s3.roll = 3;
    s3.cgpa = 65.5;
    strcpy(s3.name,"Suman");


    printf("Student 1  : \n");
    printf("\tName : %s \n",s1.name);
    printf("\tRoll : %d\n",s1.roll);
    printf("\tCGPA : %f\n\n",s1.cgpa);



    printf("Student 2  : \n");
    printf("\tName : %s \n",s2.name);
    printf("\tRoll : %d\n",s2.roll);
    printf("\tCGPA : %f\n\n",s2.cgpa);


    printf("Student 3  : \n");
    printf("\tName : %s \n",s3.name);
    printf("\tRoll : %d\n",s3.roll);
    printf("\tCGPA : %f\n\n",s3.cgpa);

    return 0;
}