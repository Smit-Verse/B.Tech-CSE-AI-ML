#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("enter your marks (out of 100) : ");
	scanf("%d",&marks);
	if (marks >= 33){
		printf("you are pass in exam");
	}
	else {
		printf("you are fail in exam");
	}
	return 0;
}
