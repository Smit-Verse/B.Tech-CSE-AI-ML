// calculate average of 5 mark's.
#include<stdio.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float average;
	printf("enter marks of first subject : ");
	scanf("%d",&m1);
	printf("enter marks of second subject : ");
	scanf("%d",&m2);
	printf("enter marks of third subject : ");
	scanf("%d",&m3);
	printf("enter marks of forth subject : ");
	scanf("%d",&m4);
	printf("enter marks of fifth subject : ");
	scanf("%d",&m5);
	total = m1+m2+m3+m4+m5;
	average = total/5.0;
	printf("total : %d\n",total);
	printf("the average of five subjects : %f",average);
	return 0;
}
