// take side of cube and calculate volume and surface area.
#include<stdio.h>
#include<conio.h>
int main()
{
	float side,volume,surfacearea;
	printf("enter side of cube : ");
	scanf("%f",&side);
	volume = side*side*side;
	surfacearea = 6*(side*side);
	printf("volume of cube : %f\n surface area of cube : %f",volume,surfacearea);
	return 0;
}
