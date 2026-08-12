//take initial speed,time and acceleration calculate final speed
#include<stdio.h>
#include<conio.h>

void main()
{
    float u, t, a, v;

    printf("Enter initial speed: ");
    scanf("%f", &u);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    v = u + a * t;
    printf("Final speed = %f", v);
}
