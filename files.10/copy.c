#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *sfp,*dfp;
	int ch;
	if((sfp=fopen("myfile","r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	
	if((dfp=fopen("dstfile","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while((ch=fgetc(sfp))!=EOF)
		fputc(ch,dfp);
	fclose(sfp);
	fclose(dfp);
	return 0;
}
