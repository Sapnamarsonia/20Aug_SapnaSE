//WAP to find reverse of string using recursion
#include<stdio.h>
char str;
void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c", *str);
	
	}
}
main()
{
	char rev;
	char ch[20], a ;
    printf("Enter name : ");
	scanf("%s", &ch);
	printf("reverse of a string is : ");
    reverse(ch);
    
	
}

