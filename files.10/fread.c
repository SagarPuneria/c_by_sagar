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
	FILE *fp;
	if((fp=fopen("stu","rb"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("name\tmarks\n");
	while(fread(&stu,sizeof(stu),1,fp)==1)
	{	
		printf("%s\t",stu.str);
		printf("%d\t",stu.roll);
		printf("%d\n",stu.marks);
	}
	fclose(fp);
	return 0;
}
