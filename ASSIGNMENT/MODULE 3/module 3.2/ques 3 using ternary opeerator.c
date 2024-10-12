//WAP to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	
	number % 2 == 0? printf("number is even:",number) : printf("number is odd",number);
		
}
