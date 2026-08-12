	// take train speed and travel time and calculate distance coverd.
	#include<stdio.h>
	#include<conio.h>
	
	void main()
	{
	    float speed, time, distance;
	
	    printf("Enter train speed : ");
	    scanf("%f", &speed);
	
	    printf("Enter travel time (in hours) : ");
	    scanf("%f", &time);
	
	    distance = speed*time;
	
	    printf("Distance covered = %f", distance);
	}
