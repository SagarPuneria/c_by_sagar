#include<stdio.h>
#include<stdio.h>
int main()
{
	int a[10],key,n,i;
	enum {
		t,f
	}flag;
	printf("enter size of array\n");//reading size of array//
	scanf("%d",&n);
	printf("enter list of elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);        //reading array elements//
	}
	printf("list of elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	putchar('\n');
	printf("enter key value\n");    //reading key value//
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
 		if(a[i]==key)   //searching element//
		{
			flag=t;
			break;
		}
	}
	if(flag==t)
	printf("key element found :%d\n",key);
	else
	printf("key element is not found\n");
return 0;
} 

