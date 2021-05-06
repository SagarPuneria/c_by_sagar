#include<stdio.h>
int main()
{
	int n,flag=0,i;
	printf("enter number\n");
	scanf("%d",&n);
	/*logic for prime*/
	for(i=2;i<=n/2;i++)
	{
		 if(n%i==0)
		 {
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("prime number\n");
	else
		printf("not prime number\n");
	return 0;
}
