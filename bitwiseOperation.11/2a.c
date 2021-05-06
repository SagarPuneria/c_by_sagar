#include<stdio.h>
int main()
{
	long int a=0xa2c3;
	a=~a;
	for(i=15;i>=0;i--)
	{
		mask=1<<i;
		bit=(a&mask)?1:0;
		printf("%d",bit);
	}
}
