#include<stdio.h>
int main()
{
	char a[15];int i=0;int n=0xa2c3;
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
//	for(i=0;a[i]!='\0';i++)
	for(i=0;i<32;i++)
		printf("%d",a[i]);
}
