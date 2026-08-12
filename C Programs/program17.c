// take a number of days as input and convert it into weeks and remaining days.
#include<stdio.h>
#include<conio.h>
void main()
{
	int days,weeks,remainingdays;
	printf("enter number of days : ");
	scanf("%d",&days);
	weeks = days/7;
	remainingdays = days%7;
	printf("weeks = %d\n",weeks);
	printf("remaining days = %d",remainingdays);
}
