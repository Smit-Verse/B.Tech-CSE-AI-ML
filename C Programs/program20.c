// calculate area using heron's formula.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("enter the first side : ");
	scanf("%f",&a);
	printf("enter the second side : ");
	scanf("%f",&b);
	printf("enter the third side : ");
	scanf("%f",&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle : %f",area);
	return 0;
	
}
