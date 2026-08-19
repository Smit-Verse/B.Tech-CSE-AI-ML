#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    printf("Uppercase character: %c", ch - 32);

    return 0;
}

