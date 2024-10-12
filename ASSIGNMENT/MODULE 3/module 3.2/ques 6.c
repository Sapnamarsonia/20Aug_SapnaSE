#include<stdio.h>
main()
{
	int n,i , fact=1;
	printf("Enter integer : ");
	scanf("%d",&n);
	for(i=1 ; i<=n ;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is , %d",n,fact);

}
