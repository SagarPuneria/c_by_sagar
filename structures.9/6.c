#include<stdio.h>
struct complex
{
	int i;
	int r;
};
int main()
{
	char ch;
	struct complex c1,c2,c3;
	enum {
		add='+',sub='-',mul='*',div='/'
	}operation;
	printf("enter first complex number to real and imaginary parts\n");
	scanf("%d%d",&c1.i,&c1.r);
	printf("Given first complex number to real and imaginary parts is %d+i%d\n",c1.i,c1.r);
	printf("enter second complex number to real and imaginary parts\n");
	scanf("%d%d",&c2.i,&c2.r);
	printf("Given second complex number to real and imaginary parts is %d+i%d\n",c2.i,c2.r);
	printf("1.Enter '+' for addtion of two complex numbers\n");
	printf("2.Enter '-' for subtraction of two complex numbers\n");
	printf("3.Enter '*' for multiplication of two complex numbers\n");
	printf("4.Enter '/' for division of two complex numbers\n");
	printf("Enter your choice\n");
	getchar();
	scanf("%c",&ch);
	operation=ch;
	switch(operation)
	{
		case add:c3.i=c1.i+c2.i;
			 c3.r=c1.r+c2.r;
			 printf("Addition of two complex numbers is %d+i%d\n",c3.i,c3.r);
			 break;
		case sub:c3.i=c1.i-c2.i;
			 c3.r=c1.r-c2.r;
			 printf("subtraction of two complex numbers is %d-i%d\n",c3.i,c3.r);
			 break;
		case mul:c3.i=c1.i*c2.i-c1.r*c2.r;
			 c3.r=c1.i*c2.r+c1.r*c2.i;
			 printf("mulplication of two complex numbers is %d+i%d\n",c3.i,c3.r);
			 break;
		case div:c3.i=(c1.i*c2.i+c1.r*c2.r)/(c2.i*c2.i-c2.r*c2.r);
			 c3.r=(c1.r*c2.i-c1.i*c2.r)/(c2.i*c2.i-c2.r*c2.r);
			 printf("division of two complex numbers is %d/i%d\n",c3.i,c3.r);
			 break;
		default :printf("wrong choice\n");
	}
	return 0;	
}
