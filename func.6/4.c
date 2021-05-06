#include<stdio.h>
int rotate(int,int);
int main()
{
	int n,r,res;
	printf("\n enter any no. and no. of bits to rotate");
	scanf("%d%d",&n,&r);
	res=rotate(n,r);
	printf("\nafter shifting %d\n",res);
	return 0;
}
int rotate(int n,int r)
{
	int b;
	b=n>>r;
	return b;
}
