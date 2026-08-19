#include <stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("First number is greater than second and third");
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("Second number is greater than first and third");
        }
        else
        {
            printf("Third number is greater than first and second");
        }
    }

    return 0;
}

