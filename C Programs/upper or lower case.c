#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter character : ");
	scanf("%c",&ch);
	if (ch >= 'A'&& ch <= 'Z'){
		printf("Upper Case");
	}
	else if (ch >= 'a'&& ch <= 'z'){
		printf("Lower Case");
	}
	else {
		printf("your character is not a english letter");
		
	}
}
