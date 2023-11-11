//Write a function to calculate Percentage of a student from marks in Science, Math & Sanskrit

#include <stdio.h>

int calcPercentage (int science, int math, int sanskrit);

int main() {
    printf ("Percentage : %d\n",calcPercentage(90,92,93));
    return 0;
}

int calcPercentage (int science, int math, int sanskrit) {
    return ((science+math+sanskrit)/3);
}