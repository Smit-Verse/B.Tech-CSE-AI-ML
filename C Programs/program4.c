// take length and width of a rectangle and calculate area and perimeter
#include<stdio.h>
#include<conio.h>
void main()
{
	int length,width,area,perimeter;
	printf("enter length of rectangle : ");
	scanf("%d",&length);
	printf("enter width of rectangle : ");
	scanf("%d",&width);
	area = length*width;
	perimeter = 2*(length+width);
	printf("area of rectangle : %d\n perimeter of rectangle : %d",area,perimeter);
}

