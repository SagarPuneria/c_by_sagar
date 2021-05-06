#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="why...?but;not?oh!,where when";
	char sep[]="?!;,. \t";
	char *t;
	t=strtok(str,sep);
	printf("%d\n",t);
	printf("%s\n",t);
	while(t!=NULL)
	{
		printf("%s ",t);
		t=strtok(NULL,sep);
	}
	printf("\n");
	return 0;
}
