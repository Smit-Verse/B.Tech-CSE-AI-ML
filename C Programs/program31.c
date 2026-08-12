// take radius of sphere and calculate volume.
#include<stdio.h>
#include<conio.h>

void main()
{
    float r, volume;

    printf("Enter radius of sphere: ");
    scanf("%f", &r);

    volume = (4.0 / 3.0) * 3.14 * r * r * r;

    printf("Volume of sphere = %f", volume);
}
