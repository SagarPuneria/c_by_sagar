#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * mystrcpy(char *,char *);
char * mystrcat(char *,char *);
char * mystrrev(char *);
char mystrcmp(char *,char *);
int main()
{
	char str1[10],str2[10],*str;int ch;
	printf("1.strcpy\n");
	printf("2.strcat\n");
	printf("3.strrev\n");
	printf("4.strcmp\n");
	printf("5.exit\n");
	printf("enter ur choice\n");
	scanf("%d",&ch);
	while(1)
	{
		switch(ch)
		{
			case 1:printf("Enter str2\n");
				scanf("%s",str2);//gets(str2);
				str=mystrcpy(str1,str2);
				printf("str1=%s\n",str);
				break;
			case 2:printf("Enter str1 and str2\n");
				scanf("%s",str1);//gets(str1);
				scanf("%s",str2);//gets(str2);
				str=mystrcat(str1,str2);
				printf("str1=%s\n",str);
				break;
			case 3:printf("Enter str1\n");
				gets(str1);
				str=mystrrev(str1);
				printf("str1=%s\n",str);
				break;	
			case 4:printf("Enter str1 and str2\n");
				scanf("%s",str1);//gets(str1);
				scanf("%s",str2);//gets(str2);
				ch=mystrcmp(str1,str2);
				if(ch==0)
					printf("same\n");
				else
					printf("different\n");
				break;
			case 5:exit(1);
			//default:printf("wrong choice\n");
				//break;
		}
	}
	return 0;
}
char * mystrcpy(char *d,char *s)
{
	int i=0;
	//while((*d++=*s++)!='\0');
	while((d[i]=s[i])!='\0')
		i++;
	return d;
}
char * mystrcat(char *d,char *s)
{
	int i=0,j=0;
	while(d[i]!='\0')
		i++;
	while(d[i++]=s[j++]);
/*	while(*d!='\0')
		d++;
	while((*d++=*s++)!='\0');*/
	return d;
}
char * mystrrev(char *s)
{
	char  temp,*p,*q;
	int i,j;
	for(i=0,j=strlen(s)-1;i<j;++i,--j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}/*
	for(p=s,q=s[strlen(s)-1];p<q;++p,--q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}*/	
	return s;
}
char mystrcmp(char *d,char *s)
{
/*	int i=0;
	while(s1[i]==s2[i])
	{
		if(s2[i]=='\0')
			return 0;
		i++;
	}
	return (s1[i]-s2[i]);
*/	while(*d==*s)
	{
		if(*d=='\0')
			return 0;
		s++;
		d++;
	}
	return *d-*s;
}
