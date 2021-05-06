#include<stdio.h>
int main()
{
	int x[8]= {10,20,30,40,50,60,70,80};
	printf("meaning of x=%p\n",x);
	printf("meaning of (x+2)=%p\n",x+2);
	printf("value of *x=%d\n",*x);
	printf("value of (*x+2)=%d\n",(*x+2));
	printf("value of *(x+2)=%d\n",*(x+2));
}
