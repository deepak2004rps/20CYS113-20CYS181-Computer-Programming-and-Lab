#include<stdio.h>
#define RS_PER_KM 2
void main()
{ 
	double start,end,trip,reward;
	printf("Enter the kms travelled at the start of the trip:");
	scanf("%lf", &start);
	printf("Enter the kms travelled at the end of the trip:");
	scanf("%lf", &end);
	trip=end-start;
	reward=trip*RS_PER_KM;
	printf("The total trip fare is %f",reward);
}	


