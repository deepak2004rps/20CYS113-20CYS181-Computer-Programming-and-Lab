#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number of rows in pattern");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
			{
				printf("* ");
			}

		
		printf("\n");

	}
}	
