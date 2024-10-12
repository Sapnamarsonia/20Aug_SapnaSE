#include<stdio.h>
main()
{
	int i,j,rows;
	// take rows as input
	printf("Enter number of rows :");
	scanf("%d",&rows);
	
	for(i=1; i<=rows ; i++)
	{
		for(j=1 ;j<=i ; j++)
		{
			 if (j <= rows - i)
            {
                 // Printing spaces
                printf(" ");
            }
            else
            {
                 // Printing stars
                printf("*");
            }
			
		}
		
		printf("\n");
		
	}
    for (i = rows-1; i >= 1; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            
            printf(" * ");
        }
        
        printf("\n");
    }
}
