//WAP to swap two numbers without using third variable
// using add and sub method
#include<stdio.h>
main()
{
	int a,b;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number 2:");
	scanf("%d",&b);
	printf("\n before swap a=%d b=%d",a,b);
	
	//code to switch a and b
	a=a+b; 
	b=a-b;
	a=a-b;
	printf("\n after sswap a=%d b=%d",a,b);
	
	//using mul div method
	int c,d;

	printf("\nenter number 1:");
	scanf("%d",&c);
	printf("\nenter number 2:");
	scanf("%d",&d);
	printf("\n before swap c=%d d=%d",c,d);

	
	//code to switch c and d
	c=c*d;
	d=c/d;
	c=c/d;
	printf("\n after sswap c=%d d=%d",c,d);
	
	
	
	
}
