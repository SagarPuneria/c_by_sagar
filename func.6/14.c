#include<stdio.h>
long int fact(int);
int gcd(int,int);
int main()
{
	int n1,n2,gcdn;
	long int f1,f2;
	printf("\n enter any two no.");
	scanf("%d%d",&n1,&n2);
	f1=fact(n1);
	f2=fact(n2);
	printf("\n factorial of two no.s \n %d!=%ld\n%d!=%ld",n1,f1,n2,f2);
	gcdn=gcd(n1,n2);
	printf("\n gcd of %d,%d is %d\n",n1,n2,gcdn);
	return 0;
}
long int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return (n*fact(n-1));
}
int gcd(int x,int y)
{
	int r;
	if(x==y)
	r=x;
	else
		if(x>y)
		r=gcd(x-y,y);
		else
		r=gcd(x,y-x);
	return r;
}
