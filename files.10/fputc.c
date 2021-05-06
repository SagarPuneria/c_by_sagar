#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int ch;
	if((fp=fopen("myfile","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("enter text\n");
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	fclose(fp);
	return 0;
}
