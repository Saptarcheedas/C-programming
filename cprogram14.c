#include<stdio.h>
#include<math.h>
int main()
{
    float n , floorValue, ceilValue;
    printf("Enter a number: ");
    scanf("%f", &n);
    floorValue = floor(n);
    ceilValue = ceil(n);
    printf("Floor of %.2f is %.2f\n", n, floorValue);
    printf("Ceiling of %.2f is %.2f\n", n, ceilValue);
    return 0;
}