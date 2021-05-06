#include<stdio.h>
/*int main()
{
	int i=0,j=0;char str[20],str2[20],ch;
	printf("enter string\n");
	gets(str);
//	scanf("%s",str);
	printf("enter character\n");
	scanf("%c",&ch);
//	getchar();
	while(str2[i++]=str[i]);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			j=i;
			j++;
			while(str[i++]=str2[j++]);
		}
	}
	printf("str=%s\n",str);
}*/
char * delete(char *,char);
int main()
{
	char str[20],*str2,ch;
	printf("enter string\n");
	gets(str);
//	scanf("%s",str);
	printf("enter character\n");
	scanf("%c",&ch);
	str2=delete(str,ch);
	printf("str=%s\n",str2);
}
char * delete(char *str,char ch)
{
	int i=0,j=0;
	char str2[20];
	while(str2[i++]=str[i]);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			j=i;
			j++;
			while(str[i++]=str2[j++]);
		}
	}
	return str;
}
