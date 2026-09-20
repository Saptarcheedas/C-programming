#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    return 0;
}