#include<stdio.h>
#include<string.h>
int main()
{
	int ch,a[10][10],c[10][10],b[10][10],y,x,i,j,n,m;
	printf("enter order of first matrix\n");
	scanf("%d%d",&n,&m);
	printf("enter order of second matrix\n");
	scanf("%d%d",&x,&y);
	if(n==x && m==y)
	{

		printf("enter elements of fist  matrix\n");
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		printf("enter elements of second  matrix\n");
		for(i=0;i<x;i++)
			for(j=0;j<y;j++)
				scanf("%d",&b[i][j]);
		//logic for subtraction of matrix	
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				c[i][j]=a[i][j]-b[i][j];
		printf("subtraction  matrix\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				printf("%2d",c[i][j]);
			printf("\n");
		}
	}
	else 
		printf("Not square matrix\n");	
	return 0;
}


