#include<stdio.h>
int main()
{
    int day, month, year;
    printf("Enter your age in days: ");
    scanf("%d", &day);
    if(day>=365)
    {
        year = day/365;
        month = (day%365)/30;
        day = (day%365)%30;
    }
    else if(day>=30 && day<365)
    {
        month = day/30;
        day = day%30;
    }
    else if(day >= 0 && day<30)
        day = day;
    else
    {
        printf("Invalid input");
        return 0;
    }
    {
        printf("Your age is: %d years, %d months, %d days", year, month, day);
        return 0;
    }
}