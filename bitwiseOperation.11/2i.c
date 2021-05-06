#include<stdio.h>
int main()
{
	int a=0xa2c3,val,n;
	int i,mask,bit;
	printf("%x\n",(a&~0x3f06)<<8);
	n=(a&~0x3f06)<<8;
	for(i=32;i>=0;i--)
	{
		mask=1<<i;
		bit=(n&mask)?1:0;
		printf("%d",bit);
	}
}
