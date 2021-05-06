#include<stdio.h>
int main()
{
	int n,r1,r2,j,flag,i;
	printf("enter prime number range r1 and r2\n");
	scanf("%d%d",&r1,&r2);
	/*logic for prime*/
	for(i=r1;i<=r2;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			 if(i%j==0)
			 {
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
