#include<stdio.h>
int main()
{
	long int n;
	int flag,i;
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
			printf("prime number is %d\n",n);
		else
			printf("%d is not prime number\n",n);			
	}
}
