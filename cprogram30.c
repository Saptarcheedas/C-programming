#include<stdio.h>
int main()
{
    char c;
    printf("Captain A got head or tail\n enter H for head and T for tail: ");
    scanf("%c", &c);
    if('H'==c)
        printf("Captain A won!");
    else if('T'==c)
        printf("Captain B won!");
    else
        printf("invalid input");
    return 0;
}