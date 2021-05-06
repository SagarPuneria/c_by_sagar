#include<stdio.h>
int main()
{
	int i,j,n,fact=1,c=40;
	float sum=1;//float s=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		for(i=1;i<=j;i++)
			fact=fact*i;
		if(c%2==0)
			sum=sum+(float)j/fact;
			
		else
			sum=sum-(float)j/fact;
		c++;
	}
	printf("sum=%f\n",sum);
}
