// take numerator and denominator and print result as decimal value
#include <stdio.h>
#include <conio.h>

int main()
{
    int numerator, denominator;
    float result;

    printf("Enter Numerator: ");
    scanf("%d", &numerator);

    printf("Enter Denominator: ");
    scanf("%d", &denominator);

    result = (float)numerator / denominator;

    printf("Result = %f", result);
} 
