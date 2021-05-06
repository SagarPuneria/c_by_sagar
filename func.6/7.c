#include<stdio.h>
#define islower(c)(c>=97 && c<=122)
#define ishigher(c)(c>=65 && c<=90)
int main()
{
	int i=0;
	char buf[20];
	printf("Enter a string\n");
	scanf("%[^\n]s",buf);
	while(buf[i]!='\0')
	{
		if(buf[i]==32)
		{
			i++;
			continue;
		}
		if(islower(buf[i]))
			buf[i]=buf[i]-32;
		else
			buf[i]=buf[i]+32;
		i++;
	}
	printf("%s\n",buf);
}
