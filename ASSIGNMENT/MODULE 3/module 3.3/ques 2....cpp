//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
main()
{
	int a,b ,result , choice;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	printf(" \nSelect a choice to perform operation...");
	printf("\n 1) ADDITION ");
	printf("\n 2) SUBTRACTION ");
	printf("\n 3) MULTIPLICATION ");
	printf("\n 4) DIVISION \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
		printf("Result = %d",a+b);
		break;
		case 2: 
		printf("Result = %d",a-b);
		break;
		case 3: 
		printf("Result = %d",a*b);
		break;
		case 4: 
		printf("Result = %d",a/b);
		break;
		
		default: 
		printf("error...select valid choice");
	}
}
