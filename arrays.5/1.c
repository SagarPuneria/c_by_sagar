#include<stdio.h>
//#include<string.h>
int main()
{
	char str[20],i,size;
	printf("Enter your name\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	size=sizeof(str)/sizeof(str[0]);
	printf("name: %s,length: %d,size: %d\n",str,i,size);
	return 0;
}
