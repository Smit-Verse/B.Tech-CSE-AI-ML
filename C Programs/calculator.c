#include<stdio.h>
#include<conio.h>
int main()
{
	float num1,num2,add,sub,mul,div;
	char op;
	printf("enter first number : ");
	scanf("%f",&num1);
	printf("enter second number : ");
	scanf("%f",&num2);
	printf("enter your operation (+,-,*,/) : ");
	scanf(" %c",&op);
	if (op == '+'){
		add = num1+num2;
		printf("addition of two numbers : %f",add);
	}
	else if (op == '-'){
		sub = num1-num2;
		printf("subtraction of two numbers : %f",sub);
	}
	else if (op == '*'){
		mul = num1*num2;
		printf("multiplication of two numbers : %f",mul);
	}
	else if (op == '/'){
		div = num1/num2;
		printf("division of two numbers : %f",div);
	}
	else {
		printf("invalid operation");
	}
	return 0;
	
}
