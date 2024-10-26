/*Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class students 
{
	public:
		int rl,i,n;
		void rollno()
		{
			cout<<"Enter number of student : ";
			cin>>n;
			for(i=0 ; i<n ;i++)
			{
				cout<<"\nEnter roll no.["<<i<<"] = ";
				cin>>rl;
			}
		}
};
class test : public students
{
	public:
		int m1, m2;
		void marks()
		{
			for(i=0 ; i<n ; i++)
			{
			cout<<"Enter marks of maths = ["<<i<<"] =";
			cin>>m1;
			cout<<"Enter marks of science = ["<<i<<"] =";
			cin>>m2;
			}
		}
};
class result : public test
{
	public:
		float total;
		void totalmark()
		{
			//for(i=0; i<n ; i++)
			//{
			total=m1+m2;
			cout<<"\nTotal marks of maths and science ="<<total;
			//}
		
		}
};
main()
{
	result rs;
	rs.rollno();
	rs.marks();
	rs.totalmark();
	
}
