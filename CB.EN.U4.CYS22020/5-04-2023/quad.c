#include<stdio.h>
#include<math.h>
int main()
{
	double r1,r2,a,b,c,y;
	printf("Enter the value for b: \n");
	scanf("%lf", &b);
	printf("Enter the value for a: \n");
	scanf("%lf", &a);
	printf("Enter the value for c: \n");
	scanf("%lf", &c);
	r1 = (-b +sqrt(pow(b,2) - 4*a*c))/2*a;
	r2 = (-b - sqrt(pow(b,2) - 4*a*c))/2*a;
	y=r1+r2;
	return 0;
} 

