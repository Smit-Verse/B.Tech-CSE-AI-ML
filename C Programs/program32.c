// take length,breadth and height of room and calculate volume and surface area.
#include<stdio.h>
#include<conio.h>

void main()
{
    float length, breadth, height;
    float volume, floorarea;

    printf("Enter length of room: ");
    scanf("%f", &length);

    printf("Enter breadth of room: ");
    scanf("%f", &breadth);

    printf("Enter height of room: ");
    scanf("%f", &height);

    volume = length * breadth * height;
    floorarea = length * breadth;

    printf("Volume of room = %f\n", volume);
    printf("Floor area of room = %f", floorarea);
}
