#include<stdio.h>
int main()
{	
	int i,n,s=0;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=0;i<=n;++i)
		if(i%2!=0)
		{
			s=s+i;
			printf("%d ",i);
		}	
	/*int i=1;			
	while(i<=n)
	{
		if(i%2!=0)
		{
			s=s+i;
			printf("%d ",i);
			++i;
			continue;
		}
		++i;
	}*/
	printf("sum of all odd numbers %d\n",s);
}
