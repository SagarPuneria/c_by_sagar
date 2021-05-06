#include<stdio.h>
int main()
{
	int i,j,factn=1,factr=1,factk=1,n,r,k,npr,ncr;
	printf("Enter n and r value\n");
	scanf("%d%d",&n,&r);
	for(j=1;j<=n;j++)
		factn=factn*j;
	k=n-r;
	for(j=1;j<=k;j++)
		factk=factk*j;
	npr=factn/factk;
	for(j=1;j<=r;j++)
		factr=factr*j;
	ncr=factn/(factr*factk);
	printf("npr=%d\nncr=%d\n",npr,ncr);
	return 0;
}
