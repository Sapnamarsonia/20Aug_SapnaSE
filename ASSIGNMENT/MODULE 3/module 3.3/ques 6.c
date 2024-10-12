//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
main()
{
	int a[5][5],b[5][5],c[5][5],d[5][5], e[5][5], R,C,i,j; // r = rows and c= column 
	printf("Enter number of rows : ");
	scanf("%d",&R);
	printf("Enter number of column : ");
	scanf("%d",&C);
	
	//first matrix
	for(i=0 ; i<R ;i++)
	{
		for(j=0 ; j<C ; j++)
		{
			printf("Enter value for matrix A : (%d%d) = ", i,j);
			scanf("%d",&a[i][j]);
		}
	}
		//second matrix
	for(i=0 ; i<R ;i++)
	{
		for(j=0 ; j<C ; j++)
		{
			printf("Enter value for matrix B : (%d%d) = ", i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// Addition of two matrix
		for(i=0;i<R ; i++)
     	{
            for(j=0 ; j<C ; j++)
	       	{
		        	c[i][j] = a[i][j] + b[i][j];
			}
     	}
		// print addition of matrix 
		printf("Addition of matrix \n ");
		for(i=0 ; i<R ;i++)
         	{
		        for(j=0 ; j<C ; j++)
		 		{
				printf("%d", c[i][j]);
				}
				printf("\n");
			}
	// subtraction of two matrix
	for(i=0; i<R ; i++)
	{
		for(j=0 ; j<C ; j++)
		{
			d[i][j] = a[i][j] - b[i][j];
			
		}
	}
		// print subtraction  of matrix 
		printf("Subtraction of matrix \n");
		for(i=0 ; i<R ;i++)
     		{
				for(j=0 ; j<C ; j++)
				{
				printf("%d", d[i][j]);
				}
				printf("\n");
			}
		// multiplication of two matrix
		for(i=0;i<R ; i++)
		{
			for(j=0 ; j<C ; j++)
			{	
				e[i][j] = a[i][j] * b[i][j];		
			}
		}
		// print multiplication of matrix 
		printf("Multiplication of matrix \n");
		for(i=0 ; i<R ;i++)
	    {
			for(j=0 ; j<C ; j++)
			{
			printf("%d", e[i][j]);
			}
			printf("\n");
		}
	

}
