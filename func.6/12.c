#include<stdio.h>
int main()
{
	int a[20],n,j;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("Enter ele\n");
	for(j=0;j<n;j++)
		scanf("%d",&a[j]);
	for(j=0;j<n;j++)
	{
		if(a[j]>9)
		printf("%x",a[j]);
		else
		printf("%d",a[j]);
	}
	putchar('\n');	
}
