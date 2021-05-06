#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello :cdac :hyderabad:\n";
	char *ptr;
	ptr=strtok(str,":");
	while(ptr!=NULL)
	{
		printf("%s",ptr);
		ptr=strtok(NULL,":");
	}
}
