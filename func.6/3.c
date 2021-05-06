#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	printf("Before sawping\na=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("After swap\na=%d,b=%d\n",a,b);
	return 0;
}
