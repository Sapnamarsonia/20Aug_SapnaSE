//Write a program of structure employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
struct employinfo
{
	int empno,age;
	char empname[20], address[20];
}st;
main()
{
	printf("Enter employ ID : ");
	scanf("%d",&st.empno);
	printf("Enter employ Name : ");
	scanf("%s",&st.empname);
	printf("Enter employ age : ");
	scanf("%d",&st.age);
	printf("Enter employ address : ");
	scanf("%s",&st.address);
	
		printf("\nEmploy no. : %d",st.empno);
		printf("\nEmploy Name : %s",st.empname);
		printf("\nEmploy Age : %d",st.age);
		printf("\nEmploy Address : %s", st.address);
}
