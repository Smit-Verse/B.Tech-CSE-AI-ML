#include <stdio.h>
#include <conio.h>
#define TAX_RATE 18

int main()
{
    float price, tax, total;

    printf("Enter Price: ");
    scanf("%f", &price);

    tax = (price * TAX_RATE) / 100;
    total = price + tax;

    printf("Tax = %f\n", tax);
    printf("Total Price = %f", total);
}
