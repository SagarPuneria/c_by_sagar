#include<stdio.h>
int main()
{
	long x,y,z;
	int i,n;
	x=0;
	y=1;
	printf("Enter a number");
	scanf("%d",&n);
	printf("%ld",y);
	//logic for fibonacci
	for(i=1;i<n;i++)
	{
		z=x+y;
		printf("%ld",z);
		x=y;
		y=z;
	}
	printf("\n");
	return 0;
}
