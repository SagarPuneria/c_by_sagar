#include<stdio.h>
int main()
{
	int i,c=0;
	char *buf="The cat sat",c2[50],ch;
	for(i=0;buf[i]!='\0';i++)
	{
		c2[i]=buf[i];
		ch=buf[i];
		if(ch==' ')
		{
			c++;
			c2[i]='-';
		}
	}
	c2[i]='\0';	
	/*while(*buf!='\0')
	{
		if(*buf==32)
		{
			*buf=45;//here i can not modify contents of pointer variable
			buf++;
			continue;
		}
		buf++;
	}*/
	printf("%s\nspaces=%d\n",c2,c);
}
