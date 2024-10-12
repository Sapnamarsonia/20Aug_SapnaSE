//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int a,b,i;
	printf("Enter number for multiplication table : ");
	scanf("%d",&a);
	printf("Enter number to print multiplication table up to that number :");
	scanf("%d",&b);
	printf("\nMultiplicaion table = ");
	for(i=1 ; i<=b ; i++)
	{
		printf("\n %d * %d = %d ", a , i , a*i);
	}
}
