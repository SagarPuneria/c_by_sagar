
#include<stdio.h>
#include<stdlib.h>
int astrcmp(char [],char []);
int main()
{
	char s1[10],s2[10];
	int i=0;
	printf("Enter two strings:\n");
	scanf("%s%s",s1,s2);
	//s3=(char *)malloc(10);
	if(astrcmp(s1,s2)==0)
		printf("same\n");
	else
		printf("different\n");
}
int astrcmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]==s2[i])
	{
		if(s2[i]=='\0')
//			break;
			return 0;
		i++;
	}
	return s1[i]-s2[i];
	
//	printf("string is %c-%c\n",s1[i],s2[i]);
}
