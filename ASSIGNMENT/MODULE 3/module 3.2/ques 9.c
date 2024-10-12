//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
main()
{
	int n,i,large =0 , rem = 0 ;
	printf("Enter number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n % 10;
		if(rem>large)
		{
			large = rem;
		}
		n = n/10;
	}
	printf("The largest digit is : %d", large);

}
