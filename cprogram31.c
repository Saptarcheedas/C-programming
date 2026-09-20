#include<stdio.h>
int main()
{
    float unit , bill;
    printf("Enter the number of units consumed: ");
    scanf("%f", &unit);
    if(unit>=0 && unit<=100)
        bill=unit*10;
    else if(unit>100 && unit<=150)
        bill=(100*10)+(unit-100)*15;
    else if(unit>150 && unit<=200)
        bill=(100*10)+(50*15)+(unit-150)*20;
    else if(unit>200)
        bill=(100*10)+(50*15)+(50*20)+(unit-200)*25;
    printf("The electricity bill is: Rs %.2f", bill);
    return 0;
}