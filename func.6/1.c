#include<stdio.h>
int main()
{
	int fact1=1,res,fact2=1,n,r,i;
	printf("Enter number n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fact1=fact1*i;
	printf("Enter number r  value\n");
	scanf("%d",&r);
	for(i=1;i<=n-r;i++)
		fact2=fact2*i;
	res=fact1/fact2;
	printf("Factorial is %d\n",res);
}
