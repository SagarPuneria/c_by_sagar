#include<stdio.h>
#define show(var,format) printf(#var"=%"#format"\n",var);
#define paste(a,b) a##b
#define marks(subject) marks_##subject
int main()
{
	int x=9,k2=14,k3=25;
	float y=2.5;
	char z='$';
	int marks_chem=89,marks_maths=98;
	show(x,d);
	show(y,f);
	show(z,c);
	printf("%d %d\n",paste(k,2),paste(k,3));
	printf("%d %d\n",marks(chem),marks(maths));
	
return 0;
}
