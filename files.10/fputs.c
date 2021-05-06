#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[80];
	if((fp=fopen("test","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("enter text\n");
	while(gets(str)!=NULL)
		fputs(str,fp);
	fclose(fp);
	return 0;
}
