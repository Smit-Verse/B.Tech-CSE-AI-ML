// take an amount in rupees as input and convert into paise
#include<stdio.h>
#include<conio.h>
void main()
{
	float rupees,paise;
	printf("enter rupees : ");
	scanf("%f",&rupees);
	paise = rupees*100;
	printf("paise = : %f",paise);
}
