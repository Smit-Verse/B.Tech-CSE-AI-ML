// take cost price and selling price as input and find the profit and loss.
#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("enter cost price : ");
	scanf("%d",&cp);
	printf("enter selling price : ");
	scanf("%d",&sp);
	if (sp>cp)
	{
		profit = sp-cp;
		printf("your profit is : %d",profit);
	}
	else if (sp<cp)
	{
		loss = cp-sp;
		printf("your loss is %d",loss);
	}
	else 
	{
		printf("no loss or no profit");
	}
}

