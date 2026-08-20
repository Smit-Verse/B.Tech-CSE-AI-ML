#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	if (num > 0) {
		printf(" number is greater than zero ");
	}
	else if (num < 0) {
		printf(" number is less than zero ");
	}
	else if (num == 0) {
		printf(" number is equal to zero ");
	}
}
