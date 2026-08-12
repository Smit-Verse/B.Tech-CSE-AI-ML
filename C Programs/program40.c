// Take today date components (day, month, year) as input and print them in DD-MM-YYYY 
#include<stdio.h>
#include<conio.h>

void main()
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Date = %02d-%02d-%04d", day, month, year);
}
