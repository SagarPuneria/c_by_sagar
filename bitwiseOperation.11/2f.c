#include<stdio.h>
int main()
{
	int a=0xa2c3,val,n;
	int j,i,mask,bit;
	printf("%x\n",a<<5);
	n=a<<5;
	for(i=31;i>=0;i--)
	{
		mask=1<<i;
		bit=(n&mask)?1:0;
		printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
}
