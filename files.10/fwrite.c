#include<stdio.h>
#include<stdlib.h>
struct record
{	
	char str[20];
	int roll;
	int marks;
}stu;
int main()
{
	int i,n;
	FILE *fp;
	if((fp=fopen("stu","wb"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter number of records\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("Enter name:\n");
		scanf("%s",stu.str);
		printf("Enter roll no:\n");
		scanf("%d",&stu.roll);
		printf("Enter marks\n");
		scanf("%d",&stu.marks);
		fwrite(&stu,sizeof(stu),1,fp);
	}
	fclose(fp);
	return 0;
}
