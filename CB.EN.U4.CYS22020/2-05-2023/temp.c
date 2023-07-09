#include<stdio.h>
void main()
{
	double t,T;
	printf("Enter the time elapsed since power failure in hours \n");
	scanf("%lf", &t);
	T=((4*t*t)/(t+2)) - 20;
	printf("The temperature drop is %f",T);
}

