#include<stdio.h>
int main()
{
	char *s[]={"we will teach you how to","move a mountain","level a building ","erase the past","make a million"};
	int i,j,c=0;
	/*for(i=0;i<5;i++)
		for(j=0;s[i][j]!='\0';j++)
			if(s[i][j]=='e')
				c++;*/
	for(i=0;i<5;i++)
		for(j=0;*(*(s+i)+j)!='\0';j++)
			if(*(*(s+i)+j)=='e')
				c++;
	printf("%d\n",c);
}
