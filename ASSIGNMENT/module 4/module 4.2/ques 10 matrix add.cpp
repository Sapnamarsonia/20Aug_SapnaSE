//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class matrix
{
	public:
		int i,n,m1[5],m2[5];
		void getdata() 
		{
			cout<<"Enter number of element for matrix = ";
		    cin>>n;
			cout<<"matrix 1\n";
			for(i=0;i<n;i++)
			{
				cout<<"Enter Element : ";
				cin>>m1[i];
			}
			
			cout<<"matrix 2\n";
			for(i=0;i<n;i++)
			{
				cout<<"Enter element :";
				cin>>m2[i];	
			}
		}
};
class addition :public matrix
{
	public:
	void display()
	{
		cout<<"Addition of matrix:"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<m1[i] + m2[i]<<"\n";
		}	
	}	
};
main()
{
	addition ad;
	ad.getdata();
	ad.display();
}
