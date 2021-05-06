#include<stdio.h>
struct data
{
  char ch;
  int a; 
};
union data2
{
  int i;
  char ch1;
  long double j;
};
int main()
{
	struct data d1;
	union data2 d2;
	printf("%d %d\n",sizeof(d1),sizeof(d2));
return 0;
}	
