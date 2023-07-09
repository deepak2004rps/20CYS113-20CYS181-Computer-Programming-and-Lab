#include<stdio.h>
void main()
{
        int n,k=65;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<=i;j++)
                {
                        printf("%c\t",k);
                        k +=1;
                }
                printf("\n");
        }
}
