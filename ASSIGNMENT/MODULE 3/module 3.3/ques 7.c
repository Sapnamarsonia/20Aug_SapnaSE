//WAP Find out length of string without using inbuilt function
#include<stdio.h>
main()
{
	int i=0;
	char string[50];
	printf("Enter string : ");
	scanf("%s",&string);
	
	for(i=0 ; string[i]!='\0' ; i++)
	{
		i++;
	}
	printf("length of string : %d",i);
}
