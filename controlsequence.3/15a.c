#include<stdio.h>
int main()
{
	int n,x,c;
	printf("enter number\n");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		x=rand();
		printf("%d \n",x);
	}
}
