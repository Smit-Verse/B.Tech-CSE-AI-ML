// take a number as input and print both sqaare and cube
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,square,cube;
	printf("enter a number : ");
	scanf("%d",&num);
	square = num*num;
	cube = num*num*num;
	printf("square of %d is %d\n",num,square);
	printf("cube of %d is %d",num,cube);
}
