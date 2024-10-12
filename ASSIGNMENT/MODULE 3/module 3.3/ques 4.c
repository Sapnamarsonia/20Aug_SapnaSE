//WAP to find factorial using recursion
#include<stdio.h>
int factorial( int n)
{
	int factN,factNm1;
	if(n==1)
	{
		return 1;
	}
	
	factNm1 = factorial(n-1);
	factN = factNm1 * n;
	return factN;
	
}
main()
{
	int n;
	printf("Enter number to find factorial :");
	scanf("%d",&n);
	printf("factorial : %d",factorial(n));
}
