#include<stdio.h>
int main()
{
    int r1, r2;
    float a, b, c, d, e, t1, t2;
    printf("Enter student 1 roll & marks of 5 subjects: ");
    scanf("%d %f %f %f %f %f", &r1, &a, &b, &c, &d, &e);
    t1 = (a + b + c + d + e) / 5;
    printf("Enter student 2 roll & marks of 5 subjects: ");
    scanf("%d %f %f %f %f %f", &r2, &a, &b, &c, &d, &e);
    t2 = (a + b + c + d + e) / 5;
    printf("Maximum marks is %.2f of student with roll number %d", (t1 > t2) ? t1 : t2, (t1 > t2) ? r1 : r2);
    return 0;
}