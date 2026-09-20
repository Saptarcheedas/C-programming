#include<stdio.h>
int main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = num/100 + (num/10)%10 + num%10;
    printf("Sum of digits of %d is %d", num, sum);
    return 0;
}