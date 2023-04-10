#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter the n positive numbers to be added:");
	scanf("%d", &n);
	sum=n*(n+1)/2;
	printf("The sum of the n numbers is: %d ",sum);
	return 0;
}

