// take principal,rate and time as input and calculate simple intrest.
#include<stdio.h>
#include<conio.h>
void main()
{
	float principal,rate,time,simpleintrest;
	printf("enter principal amount : ");
	scanf("%f",&principal);
	printf("enter rate of intrest : ");
	scanf("%f",&rate);
	printf("enter time(in years) : ");
	scanf("%f",&time);
	simpleintrest = (principal*rate*time)/100;
	printf("simple intrest is : %f",simpleintrest);
	
}
