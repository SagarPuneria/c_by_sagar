#include<stdio.h>
int main()
{
	int n,i,mask,bit,c=0;
	printf("Enter number\n");
	scanf("%d",&n);
	for(i=7;i>=0;i--)
	{
		mask=1<<i;
		bit=(n&mask)?1:0;
		if(bit)
			c++;
		printf("%d",bit);
	}
	printf("\nnumber of 1 bits is %d\n",c);
}
