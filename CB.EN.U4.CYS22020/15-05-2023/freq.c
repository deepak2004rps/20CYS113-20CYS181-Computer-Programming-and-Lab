#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d\n%d",&row,&col);
    int array[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("\n%d",&array[i][j]);
        }
    }
    int values[10], flag=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(array[i][j]>9)
            {
                printf("Error in input element");
                flag=1;
                break;
            }
            else
            {
                values[array[i][j]-1]++;
            }
        }
    }
    if(flag==0)
    {
    for (int i=0; i<10;i++)
    {
        if (values[i]!=0)
        {
            printf("the frequency of element %d is %d\n",i+1,values[i]);
        }
    }
    }
    return 0;
}
