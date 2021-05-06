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
	if((fp=fopen("students","r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("name\tmarks\n");
	while(fscanf(fp,"%s%f",stu.str,&stu.marks)!=EOF)	
		printf("%s %f\n",stu.str,stu.marks);
	fclose(fp);
	return 0;
}
