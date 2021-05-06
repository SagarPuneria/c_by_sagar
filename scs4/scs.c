#include<stdio.h>
void func(void);
void fun1(void);
static int n3=2;
int n4=2;
int main()
{
	func();
	func();
	func();
	fun1();
	fun1();
	return 0;
}
void func(void)
{
	int n1=2,n4=7;
	static int n2=2;
	printf("n1=%d,n2=%d,n3=%d,n4=%d\n",n1,n2,n3,n4);
	n1++;
	n2++;
	n3++;
	n4++;
}
void fun1(void)
{
	printf("n3=%d,n4=%d\n",n3,n4);
	n3++;
	n4++;
}
