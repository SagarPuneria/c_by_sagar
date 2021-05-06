#include<stdio.h>
int main()
{
	int s=0,n,i;
	printf("enter number N\n");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if(i%5==0)
			continue;
		s=s+i;
	}
	/*int i=1;
	while(i<=n)
	{
		if(i%5==0)
		{
			++i;
			continue;
		}
		s=s+i;
		++i;
	}*/
	printf("sum is %d\n",s);
}
			
