//WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int years,days;
	printf("Enter year : ");
	scanf("%d",&years);
	days =365 * years;
	years = days / 365 ;
	printf("\nConverted %d years into days = %d ", years,days);
	printf("\nconverted %d days into years = %d " , days , years );
	
}
