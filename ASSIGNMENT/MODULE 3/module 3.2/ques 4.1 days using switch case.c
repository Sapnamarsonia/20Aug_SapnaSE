//WAP to show Monday to Sunday using switch case
#include<stdio.h>
main()
{
	int day;
	printf("Enter day (1-7)");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1: printf("monday");
		        break;
		case 2: printf("tuesday");
		        break;
    	case 3: printf("wednesday");
		        break;
		case 4: printf("thursday");
		        break;
		case 5: printf("friday");
		        break;
		case 6: printf("saturday");
		        break;
		case 7: printf("sunday");
		        break;
		        
	default : printf("not a valid days");
	}
}
