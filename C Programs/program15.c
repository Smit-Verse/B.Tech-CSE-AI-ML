// take distance and time as input and calculate the speed.
#include<stdio.h>
#include<conio.h>
void main()
{
	int dist,time,speed;
	printf("enter distance(in cm)");
	scanf("%d",&dist);
	printf("enter time(in seconds)");
	scanf("%d",&time);
	speed = dist/time;
	printf("speed is %d ",speed);
	
}
