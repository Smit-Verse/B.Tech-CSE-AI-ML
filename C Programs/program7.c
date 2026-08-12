// celsius to fahrenheit.
#include<stdio.h>
#include<conio.h>

void main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("Temperature in Fahrenheit = %f", fahrenheit);

}
