// WAP to get 10 No. input from user and find even, odd and sum.
#include<stdio.h>
main()
{
	int n[5];
	int i , j ,even =0 , odd=0 ,evensum=0 ,oddsum=0 ;
	printf("Enter numbers : \n" );
	for(i=0 ; i<5 ; i++ )
	{
		scanf("%d",&n[i]);
	}
	for(i=0 ; i<5 ; i++)
	{
		if(n[i]  % 2 == 0)
		{
			even++;
			evensum=evensum+n[i];
		}
		else
		{
			odd++;
			oddsum=oddsum+n[i];
		}
	}
	printf("\nTotal Even number = %d" , even);
	printf("\nSum of Even number = %d", evensum );
	printf("\nTotal Odd number = %d", odd);
	printf("\nSum of Odd number = %d", oddsum);
	
}
