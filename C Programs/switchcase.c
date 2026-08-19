#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
	int n1,n2;
	printf("enter a number : ");
	scanf("%d",&n1);
	printf("enter a number : ");
	scanf("%d",&n2);
	switch(n1>n2)
	{
		case true : printf("first number is big");
		break;
		case false : printf("second number is big");
		break;
		default : printf("both are equal"); 
	}
}
