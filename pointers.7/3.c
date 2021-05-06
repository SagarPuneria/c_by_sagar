#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
	for(i=0;i<6;i++)
		printf("%s\n",color[i]);
	printf("address at color=%p\n",color);
	printf("address at (color+2)=%p\n",color+2);
	printf("string at *color=%s\n",*color);
	printf("string at *(color+2)=%s\n",*(color+2));
	printf("string at color[5]=%s,*(color+5)=%s\n",color[5],*(color+5));
}
