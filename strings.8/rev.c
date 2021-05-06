#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,temp;
	char s[]="sagar";
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("%s\n",s);
}
