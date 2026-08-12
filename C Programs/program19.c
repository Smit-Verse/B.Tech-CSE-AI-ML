// take the base and height of a triangle as input and calculate its area
#include<stdio.h>
#include<conio.h>
void main()
{
	int base,height;
	float area;
	printf("enter base of triangle : ");
	scanf("%d",&base);
	printf("enter height of triangle : ");
	scanf("%d",&height);
	area = 0.5*base*height;
	printf("area of triangle is : %f",area);
}
