#include<stdio.h>
main()
{
	int i, j, rows;
	char alpha='A' ;
	// take rows as input
	printf("Enter no. of rows :");
	scanf("%d",&rows);
	
	for(i=1 ;i <= rows ; i++)
	{
		for( j=1 ; j <=i ; j++)
		{
			printf(" %c", alpha);
			alpha++;
			
		}
			printf("\n");
	}
	
}
