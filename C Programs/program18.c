// take a number of seconds as input and convert it into minutes and remaining seconds.
#include<stdio.h>
#include<conio.h>
void main()
{
	int seconds,minutes,rd;
	printf("enter number of seconds : ");
	scanf("%d",&seconds);
	minutes = seconds/60;
	rd = seconds%60;
	printf("minutes = %d\n",minutes);
	printf("remaining seconds : %d",rd);
	 
}
