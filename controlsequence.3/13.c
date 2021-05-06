#include<stdio.h>
int main()
{
	int s=0,n,r;
	printf("enter number\n");
	scanf("%d",&n);
	do
	{
		r=n%10;
		s=r+s;
		n=n/10;
	}while(n!=0);
	printf("sum of digits of given number %d\n",s);
	return 0;
}
