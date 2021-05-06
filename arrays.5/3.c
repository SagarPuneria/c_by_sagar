#include<stdio.h>
//#include<string.h>
int main()
{
	int str[100],size,i,n;
	printf("Enter int type of data size\n");
	scanf("%d",&size); 
	n=size/sizeof(str[0]);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&str);
//	if(i>=n)
//		printf("out of limit\n");
	printf("number of integers: %d,size: %d\n",n,size);
	return 0;
}
