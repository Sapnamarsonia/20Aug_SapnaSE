//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class calculator
{
	public:
	int a, b;
	
	calculator()
	{
		cout<<"Enter number 1:";
		cin>>a;
		cout<<"Enter number 2: ";
		cin>>b;
		
		cout<<"\nAddition = "<<a+b;
		cout<<"\nSubtraction = "<<a-b;
		cout<<"\nMultiplication ="<<a*b;
		cout<<"\nDivision ="<<a/b;
		
	}
};
main()
{
	calculator cl;
}
