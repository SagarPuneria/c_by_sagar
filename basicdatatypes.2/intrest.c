#include<stdio.h>
int main()
{
	int p,r;
	float i,t;
	printf("enter amount and rate\n");
	scanf("%d%d",&p,&r);
	printf("enter time\n");
	scanf("%f",&t);
	i=(p*r*t)/100;//logic for intrest
	printf("interest is %f\n",i);
	return 0;
}
