// take marks of three subjects and calculate total and percentage. 
#include<stdio.h>
#include<conio.h>
void main()
{
	float m1,m2,m3,total,percentage;
	printf("enter physics marks : ");
	scanf("%f",&m1);
	printf("enter chemistry marks : ");
	scanf("%f",&m2);
	printf("enter maths marks : ");
	scanf("%f",&m3);
	total = m1+m2+m3;
	percentage = total/3;
	printf("total marks : %f\n percentage : %f",total,percentage);
}

