#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int ch;
	if((fp=fopen("myfile","r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
	return 0;
}
