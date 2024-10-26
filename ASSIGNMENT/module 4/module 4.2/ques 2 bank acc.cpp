/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include<iostream>
using namespace std;
class bankaccount
{
	public:
		string name , type;
		int amount,wdrawal;
		void getdata()
		{
			cout<<"\nEnter account holder name : ";
			cin>>name;
			cout<<"\nEnter type of account : ";
			cin>>type;
			cout<<"\nAccount number : 123456789";
		}
		void deposite()
		{
			cout<<"\nEnter amount for deposite :";
			cin>>amount;
			if(amount<2000)
			{
				cout<<"\n please deposite valid amount...";
			}
			else
			{
				cout<<"\n You have deposited succesfully...";
			}
		}
		void withdrawal()
		{
			cout<<"\n Enter withdrawal amount : ";
			cin>>wdrawal;
			if(wdrawal>amount)
			{
				cout<<"\n please enter valid amount...";
			}
			else
			{
				cout<<"\n Your transaction is succesfull...";
			}
		}
		void statement()
		{
			cout<<"\n Account Holder Name : "<<name;
			cout<<"\n Account number : 123456789 ";
			cout<<"\n Account type : "<<type;
			cout<<"\n Main balance : "<<amount-wdrawal;
		}
};
main()
{
	bankaccount ba;
	ba.getdata();
	ba.deposite();
	ba.withdrawal();
	ba.statement();
}
