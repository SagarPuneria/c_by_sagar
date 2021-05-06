#include<stdio.h>
int main()
{
	register int i;
	for(i=0;i<20000;i++)
		printf("%d\n",i);
	return 0;
}
