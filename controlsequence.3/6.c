#include<stdio.h>
#include<string.h>
int main()
{
	char buf[20];
	int i=0;
	printf("enter string\n");
	gets(buf);
	while(buf[i]!='\0')
	{
		printf("%d ",buf[i]);
		i++;
	}
	printf("\n");
}
