#include<stdio.h>
int main()
{
	int s=0,n,m,r;
	printf("enter number\n");
	scanf("%d",&n);
	m=n;
	//logic for palindrome
	do
	{
		r=n%10;
		s=r+s*10;
		n=n/10;
	}while(n!=0);
	if(m==s)
		printf("given no %d is palindrome\n",m);
	else
		printf("given no %d is not palindrome\n",m);
}
