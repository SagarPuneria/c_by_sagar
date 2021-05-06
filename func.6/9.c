#include<stdio.h>
#define s 20
int main()
{
	int i,a[s][s],b[s][s],n,m,j;
	printf("Enter n and m order\n");
	scanf("%d %d",&n,&m);
	printf("Enter elementes\n"); 
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[j][i]=a[i][j];
	printf("Transpose matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
