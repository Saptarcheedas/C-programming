#include<stdio.h>
int main()
{
    int total_days, years, months, days;
    printf("Enter total number of days: ");
    scanf("%d", &total_days);
    years = total_days / 365;
    months = (total_days % 365) / 30;
    days = (total_days % 365) % 30;
    printf("Age= Years: %d, Months: %d, Days: %d", years, months, days);
    return 0;
}