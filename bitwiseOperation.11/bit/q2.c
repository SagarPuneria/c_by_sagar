
#include<stdio.h>
int main()
{
	unsigned int a=0xa2c3;  //hexadecimal value of a 
	itob(a);
printf("~a\n");
	itob(~a);	           
	itoh(~a);             
	printf("a^0x3f06");    
	itob(a^0x3f06);       
	itoh(a^0x3f06);	      
	printf("a|0x3f06");
	itob(a|0x3f06);       
	itoh(a|0x3f06);       
	printf("a>>3");
	itob(a>>3);           
	itoh(a>>3);           
	printf("a<<5");
	itob(a<<5);           
	itoh(a<<5);           
	printf("a^~a");
	itob(a^~a);           
	itoh(a^~a);             
	printf("a|~a");
	itob(a|~a);           
	itoh(a|~a);           
	printf("a&~(0x3f06)<<8");
	itob(a&~(0x3f06)<<8); 
	itoh(a&~(0x3f06)<<8);
	printf("a&~(0x3f06)>>8");
	itob(a&(0x3f06)>>8);  
	itoh(a&(0x3f06)>>8);
	printf("\n");
	return 0;	
}

itob(unsigned int n)    //function to convert then given number into binary
{ 
	int a[32]={0},i=31;
	printf("\n");
	while(n>0)
	{
		a[i]=(n%2);
		n=n/2;
		i--;
	}
	for(i=0;i<32;i++)
	printf("%d",a[i]);
}

itoh(unsigned int n)   //function to convert the given number into hexadecimal
{
	int i,ch,s[8];
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
	
