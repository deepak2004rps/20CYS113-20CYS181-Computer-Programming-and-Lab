#include<stdio.h>
int main()
{
	FILE *fd;
	char ch;
	fd = fopen("/home/deepak/a.txt","r");
	if (fd==NULL)
	{
		printf("The file can't be accessed\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	printf("%d\n, %x\n, %s\n ",fd,fd,fd);
    return 0;
}

