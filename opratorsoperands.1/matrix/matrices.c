#include<stdio.h>
#include<string.h>
void add(int a[2][2],int b[2][2]);
/*{
	int i,j,c[10][10]=0;
	for(i=0;i<n;i++)
		for(i=0;i<m;i++)
			c[i][j]=a[i][j]+b[i][j];
	printf("Addition  matrix\n");
	for(i=0;i<n;i++)
	{
		for(i=0;i<m;i++)
			printf("%2d",c[i][j]);
		printf("\n");
	}
}*/
int main()
{
	int ch,a[10][10],b[10][10],y,x,i,j,n,m;
	printf("enter order of first matrix\n");
	scanf("%d%d",&n,&m);
	printf("enter elements of fist  matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	printf("enter order of second matrix\n");
	scanf("%d%d",&x,&y);
	printf("enter elements of second  matrix\n");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",&b[i][j]);
	//printf("Enter your choice for\n1.add\n2.sub\n3.mul\n4.quit\n");
	//scanf("%d",&ch);
	//switch(ch)
	//{
		//case 1:
	add(a,b);
	//		break;
	/*	case 2:sub(a[n],b[n]);
			break;
		case 3:mul(a[n],b[n]);
			break;*/
	//	case 4:exit(1);
	//	defualt:printf("wrong choice\n");
//	}
	return 0;
}

void add(int a[2][2],int b[2][2])
{
	int i,j,c[10][10],n=2,m=2;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("Addition  matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%2d",c[i][j]);
		printf("\n");
	}
}
