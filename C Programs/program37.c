// take your name,age and city print self introduction
#include<stdio.h>
#include<conio.h>

void main()
{
    char name[30], city[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf("%s", city);

    printf("Hello My name is %s\n",name);
    printf("I am %d year old\n",age);
    printf("I live in %s",city);

}
