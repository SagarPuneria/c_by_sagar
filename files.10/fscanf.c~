#include<stdio.h>
#include<stdlib.h>
struct student
{	
	char str[20];
	float marks;
}stu;
int main()
{
	FILE *fp;
	int i,n;
	if((fp=fopen("students","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("enter number of records\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter name and marks\n");
		scanf("%s%f",stu.str,&stu.marks);	
		fprintf(fp,"%s %f ",stu.str,stu.marks);
	}
	fclose(fp);
	return 0;
}
