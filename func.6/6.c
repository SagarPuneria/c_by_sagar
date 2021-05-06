#include<stdio.h>
void displaybits(int );
void play_bits(int ,int ,int );
int main()
{
	int b,n,p;
	printf("Enter number\n");
	scanf("%d",&n);
	displaybits(n);
	printf("Enter pos,no of bits\n");
	scanf("%d%d",&p,&b);
	play_bits(n,p,b);
}
void play_bits(int n,int p,int b)
{
	int mask,ch;
	mask=~(~0<<b)<<p-b+1;
	printf("1.set\n");
	printf("2.clear\n");
	printf("3.invert\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:n=n|mask;
			displaybits(n);
			break;
		case 2:n=n&~mask;
			displaybits(n);
			break;
		case 3:n=n^mask;
			displaybits(n);
			break;
	}
}
void displaybits(int n)
{
	int j,mask;
	for(j=31;j>=0;j--)
	{
		mask=1<<j;
		putchar((n&mask)?'1':'0');//bit=(i&mask)?1:0;
		//printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
	putchar('\n');
}	
/*void displaybits(int );
void display(int ,int );
int main()
{
	int b,n;
	printf("Enter number\n");
	scanf("%d",&n);
	displaybits(n);
	printf("Enter bit pos\n");
	scanf("%d",&b);
//	n=n|(n-1);
	display(n,b);
	return 0;
}
void displaybits(int n)
{
	int j,mask;
	for(j=31;j>=0;j--)
	{
		mask=1<<j;
		putchar((n&mask)?'1':'0');//bit=(i&mask)?1:0;
		//printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
	putchar('\n');
}
void display(int n,int b)
{
	int j,mask,x;
	for(j=31;j>b;j--)
	{
		mask=1<<j;
		putchar((n&mask)?'1':'0');//bit=(i&mask)?1:0;
		//printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
	
	for(j=b;j>=0;j--)
	{
		mask=1<<j;
		putchar((n^mask)?'1':'0');
		if(j%8==0)
			putchar(' ');
	}
	putchar('\n');
}*/
