#include <stdio.h>
int main()
{
    float a, b, result;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &b);
    switch(operator)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid operator!");
            return 0;
    }
    printf("Result: %.2f\n", result);
    return 0;
}