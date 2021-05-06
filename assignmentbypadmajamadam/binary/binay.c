#include<stdio.h>
int a[15],i,j;
itob(int n){	/*logic for binary*/
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);

printf("\n");
}
int main()
{
	int n,i=0,j,x=10,k,k1,k2;
//	printf("enter a number\n");
//	scanf("%d",&n);
itob(x);
k1=x>>4;
itob(k1);
k2=x>>28;
itob(k2);
k=k1|k2;
itob(k);
//itob(n);
}

