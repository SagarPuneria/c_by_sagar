#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned it;
	char hex[]="0123456789ABCDEF";
	int i=9;
	char *ot=malloc(sizeof(unsigned)*2+3);
	scanf("%d",&it);
	strcpy(ot,"0x00000000");
	
	while(it>0)
	{
		ot[i--]=hex[(it&0xf)];
		i>>=4;
	}
	for(i=0;ot[i]!='\0';i++)
	printf("%d",ot[i]);
}
