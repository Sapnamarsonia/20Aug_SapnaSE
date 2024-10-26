/*Create a class person having members name and age. Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string nm;
		void getdata()
		{
			cout<<"\n Enter name :";
			cin>>nm;
			cout<<"\n Enter age : ";
			cin>>age;
		}
};
class student 
{
	public:
		float pr;
		void prdetail()
		{
			cout<<"\n Enter percentage : ";
		    cin>>pr;
		}
		
};
class teacher
{
	public:
		float salary;
		void salgetdata()
		{
		cout<<"\n Enter salary : ";
		cin>>salary;	
		}
	
};
class details : public person , public student , public teacher
{
	public:
		void printdata()
		{
			cout<<"\n Name :"<<nm;
			cout<<"\n Age :"<<age;
			cout<<"\n Percentage : "<<pr;
			cout<<"\n Salary : "<<salary;
		}
	
};
main()
{
	details dl;
	dl.getdata();
	dl.prdetail();
	dl.salgetdata();
	dl.printdata();
}
