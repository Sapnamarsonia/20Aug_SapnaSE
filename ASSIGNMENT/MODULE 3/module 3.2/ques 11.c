Oyu7thyuop)/Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include<stdio.h>
main()
{
	int num,lastdigit , firstdigit, sum;
	printf("Enter any number : ");
	scanf("%d",&num);
	
	lastdigit = num%10;
	firstdigit = num;
	
	while(num>10)
	{
		num=num/10;
	}
	firstdigit=num;
	// finding sum of last and first digit
	
	sum = firstdigit + lastdigit ;
	printf("sum of firstdigit and lastdigit = %d",sum);
	
}
