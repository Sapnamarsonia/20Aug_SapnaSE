//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading
#include<iostream>
using namespace std;
class calculator
{
	public:
		void calc(int a,int b)
		{
			cout<<"\nEnter num1 and num2 : ";
			cin>>a>>b;
			cout<<"\nAddition :"<<a+b;
			cout<<"\nsubtraction : "<<a-b;
			cout<<"\nMultiplication :"<<a*b;
			
		}
		void calc(double a,double b)
		{
			cout<<"\nEnter num3 and num4 : ";
			cin>>a>>b;
			cout<<"\nDivision:"<<a/b;
		
			
		}
};
main()
{
	calculator cl;
	cl.calc(10,5);
	cl.calc(15.5,11.8);
}
