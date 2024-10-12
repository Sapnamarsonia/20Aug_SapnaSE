#include<stdio.h>
main()
{
	int i, j, rows;
	int count = 1;
	// take rows as input
	printf("Enter no. of rows :");
	scanf("%d",&rows);
	
	for(i=1 ;i <= rows ; i++)
	{
		for( j=1 ; j <=i ; j++)
		{
			printf(" %d", count);
			count++;
			
		}
			printf("\n");
	}
	
}
