// take number items and price per item and calculate total cost including gst.
#include<stdio.h>
#include<conio.h>
void main()
{
    int items;
    float price, gst, basiccost, gstamount, totalcost;

    printf("Enter number of items : ");
    scanf("%d", &items);

    printf("Enter price per item : ");
    scanf("%f", &price);

    printf("Enter GST rate : ");
    scanf("%f", &gst);

    basiccost = items*price;
    gstamount = basiccost * gst/100;
    totalcost = basiccost + gstamount;

    printf("Basic cost = %f\n", basiccost);
    printf("GST amount = %f\n", gstamount);
    printf("Total cost including GST = %f", totalcost);
}
