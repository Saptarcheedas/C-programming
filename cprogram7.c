#include<stdio.h>
int main()
{
    int n , l;
    printf("Enter a number: ");
    scanf("%d", &n);
    l = n-(n/10)*10;
    printf("Last digit of %d is %d", n, l);
    return 0;
}