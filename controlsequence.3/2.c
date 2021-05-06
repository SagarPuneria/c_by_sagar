#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	printf("1.Enter 'A' or 'a'\n");
	printf("2.Enter 'B' or 'b'\n");
	printf("3.Enter 'C' or 'c'\n");
	printf("4.Enter 'D' or 'd'\n");
	printf("5.Enter 'F' or 'f'\n");
	printf("6.Enter 'E' or 'e' to exit\n");
	printf("Enter your choice\n");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		switch(ch)
		{
			case 'a': printf("a for Apple\n");
					break;
			case 'b': printf("b for Bat\n");
					break;
			case 'c': printf("c for Cat\n");
					break;
			case 'd': printf("d for Dog\n");
					break;
			case 'f': printf("f for Fan\n");
					break;
			case 'e': exit(1);

			default : printf("character is not in range\n");
		}
	}	
	else
	{
		switch(ch)
		{
			case 'A': printf("A for Apple\n");
					break;
			case 'B': printf("B for Bat\n");
					break;
			case 'C': printf("C for Cat\n");
					break;
			case 'D': printf("D for Dog\n");
					break;
			case 'F': printf("F for Fan\n");
					break;
			case 'E': exit(1);

			default : printf("character is not in range\n");
		}
	}
	return 0;
}
