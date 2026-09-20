#include<stdio.h>
int main()
{
    float area, radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of circle is: %f", area);
    
    float base, height;
    printf("\nEnter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("Area of triangle is: %f", area);
    
    float side;
    printf("\nEnter side of square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of square is: %f", area);
    
    float length, breadth;
    printf("\nEnter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of rectangle is: %f", area);
    return 0;
}