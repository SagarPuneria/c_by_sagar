#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
//	gets(str);
	printf("%s\n",str);
}
