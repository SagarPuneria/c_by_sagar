#include<stdio.h>
void displaybits(int );
int main()
{
	int n,i,mask,bit,c=0;
	printf("Enter number\n");
	scanf("%d",&n);
	displaybits(n);
	return 0;
}
void displaybits(int n)
{
	int j,mask;//mask=0xf00000;
	for(j=23;j>=0;j--)
	{
		mask=1<<j;
			
		putchar((n&mask)?'1':'0');//bit=(i&mask)?1:0;
		//mask=mask>>1;//printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
	putchar('\n');
}
