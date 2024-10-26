//Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class concate
{
	public:
		void con(string a)
		{
			cout<<a;
		}
		void con(char b[10])
		{
			cout<<b;
		}
};
main()
{
	concate ct;
	ct.con("sap");
	ct.con("na");
}
