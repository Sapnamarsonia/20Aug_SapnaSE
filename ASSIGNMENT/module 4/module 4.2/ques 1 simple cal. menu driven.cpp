//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
	public:
	int a,b;
	
	void getdata()
	{
		cout<<"Enter number 1 : ";
		cin>>a;
		cout<<"Enter number 2 : ";
		cin>>b;
	}
	void addition()
	{
		cout<<"\nAddition = "<<a+b;
	}
	void subtraction()
	{
		cout<<"\nSubtraction = "<<a-b;
	}
	void multiplication()
	{
		cout<<"\nMultiplication = "<<a*b;
	}
	void division()
	{
		cout<<"\nDivision = "<<a/b;
	}
};
main()
{
	calculator cl;
	cl.getdata();
	char c;
	
	cout<<"\n Enter your choice to perform operation ( + - * / ) : ";
	cin>>c;
	switch(c)
	{
		case '+':
		cl.addition();
		break;
		
		case '-': 
		cl.subtraction();
		break;
		
		case '*':
		cl.multiplication();
		break;
		
		case '/':
		cl.division();
		break;
		
		default:
		cout<<"\n error... please select valid choice.";
	}
}
