#include<stdio.h>
void main()
{
	double volume,T,t,rate;
	printf("Enter the volume in the bag(in millilittres):\n");
	scanf("%lf", &volume);
	printf("Enter the time it needs to be infused:(in minutes)\n");
	scanf("%lf", &t);
	T=t/60;
	rate=volume/T;
	printf("The rate of infusion of liquid into the body is %f ml/hr",rate);
}




