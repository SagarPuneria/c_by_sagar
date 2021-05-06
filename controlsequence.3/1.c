#include<stdio.h>
int main()
{
	int i,j;
	printf("enter i and j values:\n");
	scanf("%d%d",&i,&j);
	if(i<=40 && j<=40)
	{
		(i==20 ||j==20)?printf("Atlest one variable is having 20\n"):printf("Both variables are not having 20\n"); 
		(i<=40 && j<=40)?printf("Both are less than or equal 40\n"):printf("Both are not less than or equal 40\n"); 
	}
	else
		printf("Atleast one value is greater than 40\n");
/*	(i<=40 && j<=40)?(((i==20 ||j==20)?printf("Atlest one variable is having 20\n"):printf("Both variables are not having 20\n")): 
	((i<=40 && j<=40)?printf("Both are less than or equal 40\n"):printf("Both are not less than or equal 40\n"))):(printf("atleast one value is greater than 40\n")); 
*/
//	(i==20 ||j==20)?printf("Atlest one variable is having 20\n"):printf("Both variables are not having 20\n"); 
//	(i<=40 && j<=40)?printf("Both are less than or equal 40\n"):printf("Both are not less than or equal 40\n"); 
	return 0;
}
