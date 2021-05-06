#include<stdio.h>
int main()
{
	int a=0xa2c3,val,n;
	int i,mask,bit;
	printf("%x\n",a|~0x3f06);
	val=0x3f06;
	n=a|~val;
	for(i=15;i>=0;i--)
	{
		mask=1<<i;
		bit=(n&mask)?1:0;
		printf("%d",bit);
	}
}
