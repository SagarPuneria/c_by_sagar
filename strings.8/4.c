#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *arrp[20],str[20],n;
	int i;
	printf("enter number of strings,that you want to enter\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter string %d:",i+1);
		scanf("%s",str);
		//gets(str);
		arrp[i]=(char *)malloc(strlen(str)+1);
		strcpy(arrp[i],str);
	}
	for(i=0;i<n;i++)
		printf("%s\n",arrp[i]);
}
	
