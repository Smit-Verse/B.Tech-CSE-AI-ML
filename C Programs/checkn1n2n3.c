#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3;
	printf("enter first number : ");
	scanf("%d",&num1);
	printf("enter second number : ");
	scanf("%d",&num2);
	printf("enter third number : ");
	scanf("%d",&num3);
	if (num1 > num2 && num1 > num3){
		printf("first number is greater than second and third");
		if (num2 > num1 && num2 > num3){
			printf("second number is greater than first and third");
		}
		else {
			printf("third number is greater than second and first");
		}
	}
	
}
