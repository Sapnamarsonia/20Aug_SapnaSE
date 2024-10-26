////Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class parent
{
	private:
		int a,b;
		
		public:
		parent()
		{
			cout<<"enter a = "; //get two number from user
			cin>>a;
			cout<<"enter b = ";
			cin>>b;
			a=a+b;             //code to swap number wthout using third var.
			b=a-b;
			a=a-b;
		}
		friend void printdata(parent &pr); // friend func.
};
void printdata(parent &pr)
{

	cout<<"\nAfter swaping";
	cout<<"\na = "<<pr.a;
	cout<<"\nb = "<<pr.b;
}
main()
{
	parent pr;
	printdata(pr);
	
}
