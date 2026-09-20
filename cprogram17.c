#include<stdio.h>
int main()
{
    int n=10 ,sum;
    sum = n*(n+1)*(2*n+1)/6;
    printf("Sum of squares of first %d natural numbers is %d", n, sum);
    return 0;  
}