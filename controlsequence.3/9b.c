#include<stdio.h>
#include<string.h>
int main()
{
	int ch,a[10][10],c[10][10],b[10][10],y,x,i,j,n,m,k	;
	printf("enter order of first matrix\n");
	scanf("%d%d",&n,&m);
	printf("enter order of second matrix\n");
	scanf("%d%d",&x,&y);
	if(m==x)
	{

		printf("enter elements of fist  matrix\n");
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		printf("enter elements of second  matrix\n");
		for(i=0;i<x;i++)
			for(j=0;j<y;j++)
				scanf("%d",&b[i][j]);
		//logic for multiplication of matrix	
		for(i=0;i<n;i++)
			for(j=0;j<y;j++)
			{
				c[i][j]=0;
				for(k=0;k<x;k++)
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		printf("multiplication of matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<y;j++)
				printf("%2d  ",c[i][j]);
			printf("\n");
		}
	}
	else 
		printf("matrix multiplication not possible\n");	
	return 0;
}


