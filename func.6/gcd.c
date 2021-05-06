#include<stdio.h>
int main()
{
	int n1,n2,x,y;
	while(1)
	{
		n1=13;//rand();
		n2=8;//rand();
		x=n1;
		y=n2;
		printf("random numbers are %d %d\n",n1,n2);
		while(n1!=n2)
		{
			if(n1>n2)
				n1=n1-n2;
			else
				n2=n2-n1;
		}
		if(n1==1 && n2==1)
			break;
	}
	printf("GCD of %d and %d is %d\n",x,y,n1);
	return 0;
}
