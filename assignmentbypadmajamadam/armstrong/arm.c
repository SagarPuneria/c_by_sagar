#include<stdio.h>
int main()
{
	int s=0,n,m,r;
	printf("enter a number\n");
	scanf("%d",&n);
	m=n;
	do
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}while(n!=0);
	if(s==m)
		printf("armstrong\n");
	else	
		printf("not armstrong\n");
}

