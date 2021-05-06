#include<stdio.h>
int main()
{
	int y;
	printf("enter year:\n");
	scanf("%d",&y);
	if(y%100!=0)
	{
		if(y%4==0)
			printf("Leap year \n");
		else
			printf("Not leap \n");
	}
	else
	{
		if(y%400==0)
			printf("Leap year \n");
		else
			printf("Not leap \n");
	}
}
