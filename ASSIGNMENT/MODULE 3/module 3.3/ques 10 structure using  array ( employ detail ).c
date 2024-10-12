// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
struct employinfo
{
	int empno,age;
	char empname[20], address[30];
}st[5];
main()
{
	int i;
	for(i=0 ; i<5 ; i++)
	{
	
	printf("Enter employ ID : ");
	scanf("%d",&st[i].empno);
	printf("Enter employ Name : ");
	scanf("%s",&st[i].empname);
	printf("Enter employ age : ");
	scanf("%d",&st[i].age);
	printf("Enter employ address : ");
	scanf("%s",&st[i].address);
    }
	
	for(i=0 ; i<5 ; i++)
	{
		printf("\nEmploy no. : %d",st[i].empno);
		printf("\nEmploy Name : %s",st[i].empname);
		printf("\nEmploy Age : %d",st[i].age);
		printf("\nEmploy Address : %s", st[i].address);
	}
	
	
	
}
