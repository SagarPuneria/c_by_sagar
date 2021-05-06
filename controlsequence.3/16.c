#include<stdio.h>
float pay(int,int);
int main()
{
	int rop,noh;
	float tp;
	printf("enter rate of pay and no. of hours");
	scanf("%d%d",&rop,&noh);
	tp=pay(rop,noh);
	printf("\n pay at %d paise/hr for %d hours is %6.2f rupees",rop,noh,tp/100); 
	return 0;
}	
float pay(int x,int y)
{
	int temp1,temp2;
	float tp1;
	if(y<=40)
	tp1=x*y;
	else
	{ 
		temp1=x-40;
		if(temp1<=20)
		tp1=x*40+x*1.5*temp1;
		else 
		{
			temp2=y-60;
			tp1=x*40+x*1.5*20+x*temp2*2;
		}
	}
	return tp1;
	
}

