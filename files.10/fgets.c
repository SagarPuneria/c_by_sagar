#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[80];
	if((fp=fopen("test","r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while(fgets(str,80,fp)!=NULL)
		puts(str);
	fclose(fp);
	return 0;
}
