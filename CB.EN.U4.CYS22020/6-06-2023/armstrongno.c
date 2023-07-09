#include<stdio.h>
int checkArmstrong(int n)
{
int sum=0,rem,x=n;
while(x>0)
{
	rem=x%10;
	sum+= rem*rem*rem;
	x=x/10;
}
if(sum==n)
{
	printf("It is an armstrong number");
}
else
{
	printf("It is not an armstrong number");
}

return 0;

}

int main()
{
	int n;
	printf("Enter the number to be checked:");
	scanf("%d",&n);
	checkArmstrong(n);
	return 0;
}


