/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
 Rectangle: Area * breadth
 Triangle: . *Area* breadth
 Circle: Pi * Area *Area*/
#include<iostream>
using namespace std;
int area(int l,int b)
{
	cout<<"Enter length and breadth : ";
	cin>>l>>b;
	cout<<"\nArea of rectangle = "<<l*b;
}
float area(float c,float h)
{
	cout<<"\nEnter base and height: ";
	cin>>c>>h;
	cout<<"\nArea of traingle = "<<0.5*c*h;
}
float area(float r)
{
	cout<<"\nEnter radius: ";
	cin>>r;
	cout<<"\nArea of circle = "<<(3.14)*r*r;
}
main()
{
	int l,b;
	float c,h,r;
	area(l,b);
	area(c,h);
	area(r);
}
