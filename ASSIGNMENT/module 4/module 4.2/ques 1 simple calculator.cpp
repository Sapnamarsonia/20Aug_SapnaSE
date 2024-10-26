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
	cl.addition();
	cl.subtraction();
	cl.multiplication();
	cl.division();
}
