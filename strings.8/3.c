#include<stdio.h>
#include<string.h>
int main()
{
	char *a[5]={"white","red","green","yellow","blue"};
	int  i,j;
	char *temp;
	printf("bfore swaping\n");
	for(i=0;i<5;i++)
		printf("%s\t",a[i]);
	printf("\n");
	for(i=0;i<5;i++)//similar selection sort
		for(j=i+1;j<5;j++)
			if(strcmp(a[i],a[j])>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	printf("After sorting :\n");
	for(i=0;i<5;i++)
		printf("%s ",a[i]);
	printf("\n");
	return 0;
}
