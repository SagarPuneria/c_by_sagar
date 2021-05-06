#include<stdio.h>
struct bits
{
     unsigned a:6;
     unsigned b:4;
     unsigned c:6;
};
int main()
{
	struct bits v;
	v.a=3;
	v.b=5;
	v.c=7;
	printf("value at v.a=%d\n",v.a);
	printf("value at v.b=%d\n",v.b);
	printf("value at v.c=%d\n",v.c);
	return 0;
}
		
	
