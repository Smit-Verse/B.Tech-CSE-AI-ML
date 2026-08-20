#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter any number : ");
	scanf("%d",&num);
	if (num % 2 == 0){
		printf("given number is even");
	}
	else {
		printf("given number is odd");
	}
}
