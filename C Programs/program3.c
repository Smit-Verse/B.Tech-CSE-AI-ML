// take the radius of circle as input and calculate its area.
#include<stdio.h>
#include<conio.h>
void main()
{
	int radius;
	float area;
	printf("enter radius of circle : ");
	scanf("%d",&radius);
	area = 3.14*radius*radius;
	printf("area of circle : %f",area);
}
