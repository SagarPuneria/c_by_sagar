#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,k,l;
	float x,y;
	printf("enter first complex number to real and imaginary parts\n");
	scanf("%d%d",&a,&b);
	printf("Given first complex number to real and imaginary parts is %d+i%d\n",a,b);
	printf("enter second complex number to real and imaginary parts\n");
	scanf("%d%d",&c,&d);
	printf("Given second complex number to real and imaginary parts is %d+i%d\n",c,d);
	e=a+c;
	f=b+d;
	printf("Addition of two complex numbers is %d+i%d\n",e,f);
	g=a-c;
	h=b-d;
	printf("Subtraction of two complex numbers is %d+i%d\n",g,h);
	k=a*c-b*d;
	l=a*d+b*c;
	printf("multiplication of two complex numbers is %d+i%d\n",k,l);
	x=(a*c+b*d)/(c*c-d*d);
	y=(b*c-a*d)/(c*c-d*d);	
	printf("division of two complex numbers is %d+i%d\n",x,y);
	return 0;
}
