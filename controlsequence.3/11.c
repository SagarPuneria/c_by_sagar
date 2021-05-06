#include<stdio.h>
int main()
{
	int a[10],i,n,find;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("enter search  element\n");
	scanf("%d",&find);
	for(i=1;i<=n;i++)
	{
		if(a[i]==find)
		{
			printf("elmennt %d is present\n",a[i]);
			break;
		}
	}
	printf("element is not present\n");
	return 0;
}
