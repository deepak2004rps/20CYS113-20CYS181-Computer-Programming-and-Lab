#include<stdio.h>
struct stu
{
	char name[30];
	int rno;
	char father[30], mother[30];
	int phone;
	float sem1,sem2,cgpa;
}s[80];
void main()
{
	int nofstu,i;
	printf("Enter the numbers students records to be entered: ");
	scanf("%d",&nofstu);
	for(i=0;i<nofstu;i++)
	{
		printf("Enter the name of the student: ");
	       scanf("%s",&s[i].name);
       		printf("Enter the roll number of the student: ");
               scanf("%d",&s[i].rno);
                printf("Enter the student's father name: ");
               scanf("%s",&s[i].father);
                printf("Enter the student's mother name: ");
               scanf("%s",&s[i].mother);
                printf("Enter the student's contact name: ");
               scanf("%d",&s[i].phone);
	}

	int marks[6],sum;
	for(int j=0;j<nofstu;j++)
	{
		for(int k=0;k<6;k++)
	           {
				printf("Enter the marks of %s for subject %d ",s[j].name,k+1);
                                scanf("%d",&marks[k]);
			        while(marks[k]<0 || marks[k]>100) 
				{
					printf("Please enter the marks in the range 0-100 ");
					scanf("%d",&marks[k]);
				}
		   }
		sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
		s[j].sem1=(float)sum/(float)60;
		s[j].cgpa=s[j].sem1;
		s[j].sem2=0;
	}
	for (int i=0;i<nofstu;i++)
	{
		printf("\n Name of the student: %s",s[i].name);
                printf("\n Roll number of the student: %d",s[i].rno);
                printf("\n Student's mother name: %s",s[i].mother);
		printf("\n Student's father name: %s",s[i].father);
		printf("\n Student's contact number: %d",s[i].phone);
		printf("\n Student's Semester 1 sgpa: %.2f",s[i].sem1);
		printf("\n Student's Semester 2 sgpa: %.2f",s[i].sem2);
		printf("\n Student's CGPA: %.2f",s[i].cgpa);
	}
}


