// take basic salary as input,add HRA and DA and calculate the gross salary.
#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,hra,da,gross;
	printf("enter basic salary : ");
	scanf("%f",&basic);
	hra = basic*0.20;
	da = basic*0.80;
	gross = hra+da+basic;
	printf("HRA = %f\n",hra);
	printf("DA = %f\n",da);
	printf("Gross salary : %f",gross);
}
