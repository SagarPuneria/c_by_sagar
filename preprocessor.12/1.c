#include<stdio.h>
#define fact(a)  for(i=1;i<=a;i++)\
		pro=pro*i;
int main()
{
	int b,c,pro=1,i;
	printf("enter a number\n");
	scanf("%d",&b);
	fact(b);
	printf("%d\n",pro);
	return 0;
}
