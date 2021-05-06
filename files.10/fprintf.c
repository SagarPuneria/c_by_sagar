#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[80];
	int age;
	if((fp=fopen("rec","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("enter your name and age\n");
	scanf("%s%d",str,&age);
	fprintf(fp,"my name is %s and age is %d ",str,age);
	fclose(fp);
	return 0;
}
