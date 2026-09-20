#include<stdio.h>
int main()
{
    int seconds, minutes, hours;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    if(seconds>=3600)
    {
        hours = seconds/3600;
        minutes = (seconds%3600)/60;
        seconds = (seconds%3600)%60;
    }
    else if(seconds>=60 && seconds<3600)
    {
        minutes = seconds/60;
        seconds = seconds%60;
    }
    else if(seconds >= 0 && seconds<60)
        seconds = seconds;
    else
    {
        printf("Invalid input");
        return 0;
    }
    {
        printf("Time in hours, minutes and seconds is: %d hours, %d minutes, %d seconds", hours, minutes, seconds);
        return 0;
    }
}