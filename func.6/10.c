#include<stdio.h>
void itob(int);
void itoh(int);
/*
int main()
{
	int i=0,j=0,n,bit=0,mask;//=0x80;//mask=0x80000000;
	int a[15];
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Hex=%p\n",n);
	//for(j=0;j<8;j++)
	//{
	//	bit=(i&mask)?1:0;
	//	printf("%d",bit);
	//	mask=mask>>1;
		//if(j%8==0)
		//	putchar(' ');	
	//}
	for(j=31;j>=0;j--)
	{
		mask=1<<j;
		putchar((n&mask)?'1':'0');//bit=(i&mask)?1:0;
		//printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
	putchar('\n');
	while(n>0)
	{
		a[i]=n%16;
		n=n/16;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		if(a[j]>9)
		printf("%x",a[j]);
		else
		printf("%d",a[j]);
	}
	putchar('\n');		
}
*/
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Hex=%p\n",n);
	itob(n);
	itoh(n);
}
void itob(int n)
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
void itoh(int n)
{
	int i=0,j,a[15];
	while(n>0)
	{
		a[i]=n%16;
		n=n/16;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		if(a[j]>9)
		printf("%x",a[j]);
		else
		printf("%d",a[j]);
	}
	putchar('\n');	
}
