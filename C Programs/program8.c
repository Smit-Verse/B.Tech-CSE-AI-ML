// swap the values of two variables using a third (temporary) variable
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("values before swapping\n a = %d\n b = %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("values after swapping\n a = %d\n b = %d",a,b);
}



