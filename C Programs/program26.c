// take principal amount and anual intrest rate find amount after one year
#include <stdio.h>
#include <conio.h>

void main()
{
    float principal, rate, interest, amount;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate : ");
    scanf("%f", &rate);

    interest = (principal * rate * 1) / 100;
    amount = principal + interest;

    printf("Amount after one year = %f", amount);
}
