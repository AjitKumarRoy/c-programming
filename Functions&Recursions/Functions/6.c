//write functions to calculate area of square, circle and rectangle

#include <stdio.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float length, float breadth);

int main() {
    printf("Enter side of square : ");
    float side;
    scanf("%f", &side);

    printf("Enter radius of circle : ");
    float radius;
    scanf("%f", &radius);

    printf("Enter length of rectangle : ");
    float length;
    scanf("%f", &length);
    printf("Enter breadth of rectangle : ");
    float breadth;
    scanf("%f", &breadth);

    printf("Area of Square is : %.2f\n",areaSquare(side));
    printf("Area of Circle is : %.2f\n", areaCircle(radius));
    printf("Area of Rectangle is : %.2f\n", areaRectangle(length, breadth ));
    return 0;
}


//function to calculate the area of square
float areaSquare(float side) {
    return side*side;
}

//function to calculate the area of circle
float areaCircle(float radius) {
    return 3.14*radius*radius;
}

//function to calculate the area of rectangle
float areaRectangle(float length, float breadth) {
    return length*breadth;
}