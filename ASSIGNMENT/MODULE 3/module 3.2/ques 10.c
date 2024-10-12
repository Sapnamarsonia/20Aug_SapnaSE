//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int num,sum=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
		
	}
	printf("sum of digit is : %d",sum);
}
