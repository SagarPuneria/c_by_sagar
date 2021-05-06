#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],i=0,a=0,A=0,d=0,t=0,s=0;
	scanf("%[^\n]s",str);
	while(str[i]!='\0')	
	{
		if(str[i]>=97 && str[i]<=122)
			a++;
		if(str[i]>=65 && str[i]<=90)
			A++;
		if(str[i]>=48 && str[i]<=57)
			d++;
		if(str[i]==9)
			t++;
		if(str[i]==32)
			s++;
		i++;
	}
	printf("lower=%d,upper=%d,digits=%d,tabs=%d,blanks=%d\n",a,A,d,t,s);
}



	
