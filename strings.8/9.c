#include<stdio.h>
int main()
{
	char ch[2],c;int i;
	//enum {
	//	t=9,s=10
	//};
	//for(i=0;i<2;i++)
	//	scanf("%c",&ch[i]);
	printf("1.press enter to display \n");
	printf("2.press space to display \n");
	printf("Enter you choice\n");
	scanf("%[\t]c",&c);
	printf("%c\n",c);
	//getch(ch);
//	for(i=0;i<2;i++)
	
//	for(i=0;i<2;i++)
//		printf("%c\n",ch[i]);

	switch(c)
	{
		case '10':printf("new line\n");
			break;
		case '9':printf("tab\n");
			break;
	}
}
