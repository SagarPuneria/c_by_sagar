#include<stdio.h>
long int fact(int);
int main()
{
	int n;
	long int res;
	scanf("%d",&n);
	res=fact(n);
	printf("%d\n",res);
	return 0;
}
long int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return (n*fact(n-1));
}
/*
long int fact(int n)
{
	long int prod=1;
	for(i=1;i<=n;i++)
		prod=prod*i;
	return prod;
} */
