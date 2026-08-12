// report card
#include <stdio.h>
#include <conio.h>

void main()
{
    int roll;
    char name[50];
    float percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    printf("\n------ REPORT CARD ------\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Percentage  : %f\n", percentage);
}
