#include<stdio.h>
int main()
{
	long int n;
	int c=0,flag,i,x,y,n1,n2;
	while(1)
	{
		//n=rand();
		scanf("%d",&n);
		flag=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		{
			printf("prime number is %d\n",n);
			c++;
		}
		else 
			printf("%d is not prime number\n",n);
		if(c==1)
			n1=n;
		if(c==2)
		{
			n2=n;
			break;	
		}
	}
	x=n1;
	y=n2;
	printf("random numbers are %d %d\n",n1,n2);
	while(n1!=n2)
	{
		if(n1>n2)
			n1=n1-n2;
		else
			n2=n2-n1;
	}
	if(n1==1 && n2==1)
		printf("GCD of %d and %d is %d\n",x,y,n1);
}
