//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
main()
{
	int i,length , flag=0;
	char str[20];
	printf("Enter string : ");
	scanf("%s",&str);
	length = strlen(str); // length of string
	
	for(i=0; i < length/2 ; i++)
	{
		if(str[i] != str[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s is not palidrome \n ",str);
	}
	else
	{
		printf("%s is palindrome ",str);
	}
   
}
