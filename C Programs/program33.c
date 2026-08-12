// take students marks and bonus marks and print total.
#include<stdio.h>
#include<conio.h>

void main()
{
    int marks, bonus, total;

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    printf("Enter bonus marks: ");
    scanf("%d", &bonus);

    total = marks + bonus;

    printf("Total marks = %d", total);
}
