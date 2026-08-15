// area of shapes.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num1,num2,num3;
	float sqar,recar,triar,ciar,parar,trapar,rhomar,elliar,hexaar,polyar;
	printf("enter first variable : ");
	scanf("%d",&num1);
	printf("enter second variable : ");
	scanf("%d",&num2);
	printf("enter third variable : ");
	scanf("%d",&num3);
	sqar = num1*num1;
	recar = num1*num2;
	triar = 0.5*num2*num3;
	ciar = 3.14*num3*num3;
	parar = num2*num3;
	trapar = 0.5*(num1+num2)*num3;
	rhomar = 0.5*num1*num3;
	elliar = 3.14*num1*num2;
	hexaar =(3*sqrt(3) / 2)*num1*num1;
	polyar =0.5*num1*num2*num3;
	
	
	printf("-----Area Of Shapes------\n");
	printf("Area Of Square = %.2f\n",sqar);
	printf("Area Of Rectangle = %.2f\n",recar);
	printf("Area Of Triangle = %.2f\n",triar);
	printf("Area Of Circle = %.2f\n",ciar);	
	printf("Area Of Parellogram = %.2f\n",parar);	
	printf("Area Of Trapezium = %.2f\n",trapar);
	printf("Area Of Rhombus = %.2f\n",rhomar);	
	printf("Area Of Ellipse = %.2f\n",elliar);	
	printf("Area Of Hexagon = %.2f\n",hexaar);
	printf("Area Of Polygon = %.2f\n",polyar);			
	
}
