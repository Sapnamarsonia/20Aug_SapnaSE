//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)
#include<stdio.h>
main()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number 2:");
	scanf("%d",&b);
	
	// Addition of two number
	add=a+b;
	printf("addition: %d\n",add);
	
	//subtraction of two number
	sub=a-b;
	printf("subtraction: %d\n",sub);
	
	//multiplication of two number
	mul=a*b;
	printf("multiplication: %d\n",mul);
	
	//division of two number
	div=a/b;
	printf("division: %d\n",div);
	
	//modulo of two number
	mod=a%b;
	printf("modulus : %d\n",mod);
	
	
}
