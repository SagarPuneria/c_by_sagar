s
#include<stdio.h>
int main()
{
	unsigned int a,b,ch,ch1;
	printf("Enter a number in hexadecimal format:\n");
	scanf("%x",&a);
	printf("1.Display the hexadecimal equivalent of the 1's compliment\n");
	printf("2.Carry out a masking operation and to display the hexadecimal equivalent of the result\n");
	printf("3.To perform bit shifting operation and then display the hexadecimal equivalent of the result\n");
	printf("4.Exit.\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:itoh(~a); break;                 
		case 2: printf("Enter type of operation\n");
			printf("1.bitwise and\n");
			printf("2.bitwise exclusive or\n");
			printf("3.Bitwise or\n");
			scanf("%d",&ch1);
			printf("\nPlease enter and hexadecimal value to perform the masking:\n");
			scanf("%x",&b);
			switch(ch1)
			{
				case 1:itoh(a&b); break;//Bit wise AND
				case 2:itoh(a^b); break;//Bit wise XOR
				case 3:itoh(a|b); break;//Bit wise OR
			}
			break;
		case 3:printf("What type of shift you want to perform?:\n");
			printf("1.left shift.\n");
			printf("2.right shift.\n");
			scanf("%d",&ch1);
			printf("How many bits you want to shift:\n");
			scanf("%d",&b);
			if(ch1==1)
			itoh(a<<b); 
			else
			itoh(a>>b);
			break;
		default: printf("Invalid Choice");
			return -1;
	}			
			
			return 0;
}

itoh(unsigned int n)   //Function definition to convert the given value into hexadecimal value
{
	int i,ch,s[8]={0};
	printf("\n");
	i=7;
	while(n>0)
	{
		s[i]=n%16;
		n=n/16;
		i--;
	}
	for(i=0;i<8;i++)	
	{
		if(s[i]>9)
		{	
			switch(s[i])
			{ 
				case 10:printf("A"); break;
				case 11:printf("B"); break;
				case 12:printf("C"); break;
				case 13:printf("D"); break;
				case 14:printf("E"); break;
				case 15:printf("F"); break;
			}
			continue;
		}
		printf("%d",s[i]);
	}
	printf("\n");
	
}
