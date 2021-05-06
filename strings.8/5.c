#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	int i=0;
	printf("Enter two strings:\n");
	scanf("%s%s",s1,s2);
	while(s1[i]==s2[i])
	{
		if(s2[i]=='\0')
			break;
		i++;
	}
	printf("string is %c-%c\n",s1[i],s2[i]);
}
