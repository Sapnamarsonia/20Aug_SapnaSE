//Write a program to find out the max number from given array using function
#include<stdio.h>
int largest(int a[10] ,int b)
{
	int max, i ;
	max = a[0];
	for(i=0 ; i<b ; i++)
	{
		if(a[i] > max)
		{
			max=a[i];
		}
	}return max;
}
main()
{
	int i,n;
	int a[10];
	printf("input the number of value to be stored in element : ");
	scanf("%d", &n);
	printf("Input %d element in the array ", n);
	for(i=0 ; i<n ;i++)
	{
		printf("element : ");
		scanf("%d",&a[i]);
	}	
	printf("the largest value in the given array is : %d ",largest(a,n));
	
}
