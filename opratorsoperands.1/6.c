#include<stdio.h>
int main()
{
	unsigned int x=0x76543210;
	char *c=(char *)&x;
	printf("*c is %p\n",*c);
	if(*c==0x10)
	{
		if(*c==0x10)
		{
			printf("lit\n");
		}
		else
			printf("big\n");
	}
/*
	int n=1;
	char *p;
	printf("%p\n%d\n",&n,&n);
	p=(char *)&n;
	if(*p)
		printf("little endian\n");
	else*/
}
