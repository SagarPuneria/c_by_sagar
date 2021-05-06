#include<stdio.h>
struct time
	   {	
	      int hrs;
	      int mins;
	      int secs;
	    }time;
int main()
{
	struct time t1={12,45,56};
	printf("enter the hrs,mins and secs:12:45:56");
	scanf("%d%d%d",&time.hrs,&time.mins,&time.secs);
	return 0;

}	
