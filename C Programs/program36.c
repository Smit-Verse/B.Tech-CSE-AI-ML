// take two numbers and print their average rounded to two decimal places.
#include<stdio.h>
#include<conio.h>

int main()
{
    float num1, num2, average;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    average = (num1 + num2) / 2;
    printf("Average = %.2f", average);
}
