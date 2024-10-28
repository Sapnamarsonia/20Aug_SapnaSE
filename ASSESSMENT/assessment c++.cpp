//ASSESSMENT C++
#include<iostream>
using namespace std;
class lecture             // class created
{
	public:                  // accessspecifire is set as public
		string name[5],subject[5],course[5]; //data members , array is taken to get multiple value in input
		int numoflec[5],i;
		
		lecture()      // use of constructer by giving the same name as of class
 		{
			for(i=0 ; i<5 ;i++)    // taking loop to get value 
			{
				cout<<"Enter name of lecturer [" <<i<<"] = ";   // loop to get the name of lecturer
				cin>>name[i];
			}
				cout<<"\n";
		}
		void lecturedetail()     // function is created to get the details of lecture.
		{
			cout<<"Enter lecture Details..."; 
			cout<<"\n";   
			for(i=0 ; i<5 ;i++)  //again loop is taken to get the multiple input
			{ 
				cout<<"\n";
				cout<<"Name of lecturer [" <<i<<"] = "<<name[i];
				cout<<"\nEnter name of subject ["<<i<<"] =";      // input name of subject for each lecturer
				cin>>subject[i];
				cout<<"Enter name of course ["<<i<<"] = ";      //input name of course of each lecturer
				cin>>course[i];
				cout<<"Enter number of lecture ["<<i<<"] = ";    // input the number of lecturer
				cin>>numoflec[i];
				cout<<"\n";
			}
		}
	    void display()
	    {
	    	cout<<"LECTURE MANEGEMENT SYSTEM"; //heading of the assessment 
	    	cout<<"\n";
	    	for (i=0;i<5;i++)    // loop to print the display screen after getting all data
	    	{
	    			cout<<"\nName of the lecturer : "<<name[i];
					cout<<"\nName of the subject : "<<subject[i];
					cout<<"\nName of the course :"<<course[i];
					cout<<"\nNumber of lecture : "<<numoflec[i];
					cout<<"\n";
			}
		}
	    
};
main() // main function
{

	lecture l; // constructor call
	l.lecturedetail(); //function calling to get details 
	l.display();    // function calling to display the output
	
}
