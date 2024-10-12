#include<stdio.h>
main()
{
	int principle,rate,time;
	printf("enter value of principle\n");
	scanf("%d",&principle);
	printf("enter value of rate\n");
	scanf("%d",&rate);
	printf("enter value of time\n");
	scanf("%d",&time);
	int simpleinterest=(principle*rate*time)/100;
	printf("simple interest of given value :%d\n",simpleinterest);
	
}
