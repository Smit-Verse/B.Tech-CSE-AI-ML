// take length and breadt of a plot and calculate cost of fencing
#include<stdio.h>
#include<conio.h>

void main()
{
    float length, breadth, cost, perimeter, totalcost;

    printf("Enter length of plot: ");
    scanf("%f", &length);

    printf("Enter breadth of plot: ");
    scanf("%f", &breadth);

    printf("Enter cost of fencing per unit: ");
    scanf("%f", &cost);

    perimeter = 2*(length+breadth);
    totalcost = perimeter*cost;

    printf("Perimeter = %f\n", perimeter);
    printf("Total cost of fencing = %f", totalcost);
}
