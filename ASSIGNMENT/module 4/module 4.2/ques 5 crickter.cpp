/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. 
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class batsman
{
	public:
	int n,i,tr[5],avg,best,sum=0;
	void inputdata()
	{
		cout<<"\n number of matches ";
		cin>>n;
		for( i=0 ; i<n ;i++)
		{
			cout<<"\nTotal run in each match : ";
			cin>>tr[i];
			sum += tr[i];
		}
	}
	void total()
	{
		cout<<"\ntotal run : "<<sum;
	}
	void averagerun()
	{
		avg=sum/n;
		cout<<"\nAverage run : "<<avg;
	}
	void bestperformance()
	{
		best=0;
		for(i=0;i<n;i++)
		{
			if(best<tr[i])
			{
				best=tr[i];
			}
		}
	}
};
class cricketer : public batsman
{
	public:
		void display()
		{
			cout<<"\nNumber of matches played :  "<<n;
			cout<<"\nRuns scored by Batsman : ";
			for(i=0;i<n;i++)
			{   
				cout<<"\n";
				cout<<tr[i];
			}
			cout<<"\nTotal run by batsman : "<<sum;
			cout<<"\nAverage runs by Batsman : "<<avg;
			cout<<"\nBest performance of the Batsman : "<<best;
		}
	
};
main()
{
	cricketer ck;
	ck.inputdata();
	ck.total();
	ck.averagerun();
	ck.bestperformance();
	ck.display();
	
	




}
