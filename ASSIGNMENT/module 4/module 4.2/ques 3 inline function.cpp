//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class value
{
	public:
	
		float mul(float a,float b)
		{
			return(a*b);
		}
		float cubic(float a)
		{
			return(a*a*a);
		}
};

main()
{
	int a,b;
	    cout<<"Enter number 1 :";
		cin>>a;
		cout<<"Enter number 2 :";
		cin>>b;
	value vl;
	cout<<"\nMultiplication ="<<vl.mul(a,b);
	cout<<"\nCubic of a = "<<vl.cubic(a);
	cout<<"\nCubic of b ="<<vl.cubic(b);
	
}
