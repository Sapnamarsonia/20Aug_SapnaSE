//WAP to check if the given year is a leap year or not
#include <stdio.h>
main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d", &year);
    if(year % 4 == 0)
    {
    	printf("The given year is leap year .");
	}
	else
	{
		printf("The given year is not leap year."); 
	}
    
}
