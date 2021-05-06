#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,l=0;
	char str3[20],str[20],*str2,ch;
	printf("enter 1st string\n");
	scanf("%s",str);
	printf("enter 2nd string\n");
	scanf("%s",str3);
	str2=str;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str3[j]!='\0';j++)
		{
						
			if(str[i]==str3[j])
			{
				k=i;
				l=i;
				k++;
				while(str[l++]=str2[k++]);
			}
		}
	}
	printf("str=%s\n",str);
}
/*char * delete(char *,char *,char *);
int main()
{
	
	char str3[20],str[20],*str2,ch;
	printf("enter 1st string\n");
	scanf("%s",str);
	printf("enter 2nd string\n");
	scanf("%s",str3);
	str2=str;
	str2=delete(str,str3,str2);
	printf("str=%s\n",str);
}
char * delete(char *str,char *str3,char *str2)
{
	int i=0,j=0,k=0,l=0;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str3[j]!='\0';j++)
		{
						
			if(str[i]==str3[j])
			{
				k=i;
				l=i;
				k++;
				while(str[l++]=str2[k++]);
			}
		}
	}
	return str;
}*/
