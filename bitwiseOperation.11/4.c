#include<stdio.h>
#include<math.h>
void display(int );
int main()
{
	int t=2,mask,a,j,s=0,n;
	printf("Eneter a number\n");
	scanf("%d",&a);
	display(a);
	printf("Enter a shift number number\n");
	scanf("%d",&n);
	a=a<<n;
	display(a);
	for(j=1;j<n;j++)
	{
		s=2*t;
		t=t+2;
	}
	if(n==1)
		printf("equivalent binary no. is %d\n",n+1);
	else	
	 	printf("equivalent binary no. is %d\n",s);
}
void display(int a)
{
	int j,mask;
	printf("Bit pattrn is\n");
	for(j=31;j>=0;j--)
	{
		mask=1<<j;
		putchar((a&mask)?'1':'0');//bit=(i&mask)?1:0;
		//printf("%d",bit);
		if(j%8==0)
			putchar(' ');	
	}
	putchar('\n');
}
