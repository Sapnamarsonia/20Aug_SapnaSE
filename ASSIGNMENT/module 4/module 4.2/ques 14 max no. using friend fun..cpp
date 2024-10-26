//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class maximum
{
	private:
		int a,b;
		public:
			void getdata()
			{
				cout<<"Enter number 1 : ";
				cin>>a;
				cout<<"Enter number 2 : ";
				cin>>b;
			}
			friend void greatest(maximum &mx);
};
void greatest(maximum &mx)
{
	if(mx.a > mx.b)
	{
		cout<<"A is Maximum number."<<mx.a;
	}
	else if(mx.a < mx.b)
	{
		cout<<"B is Maximum number."<<mx.b;
	}
	else
	{
		cout<<"number are equal.";
	}
}
main()
{
	maximum mx;
	mx.getdata();
	greatest(mx);
}
