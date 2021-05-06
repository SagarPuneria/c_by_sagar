#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("enter value of n\n");
	scanf("%d",&n);
	//logic for factorial
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("fact of %d is %d\n",n,fact);
}
