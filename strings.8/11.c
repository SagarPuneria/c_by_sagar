#include<stdio.h>
int main()
{
	char a[100],i,j;
	printf("Enter a string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=1;j<i;j++)
			printf("%c",a[j]);
		for(j=0;j<i;j++)
			printf("%c",a[j]);
		printf("\n");
	}
}
