// take price of one item and the quantity purchased and calculate total
#include<stdio.h>
#include<conio.h>
void main()
{
	int quantity;
	float price,total;
	printf("enter price of item : ");
	scanf("%f",&price);
	printf("enter quantity you purchased : ");
	scanf("%d",&quantity);
	total = price*quantity;
	printf("total bill is : %f",total);
}
