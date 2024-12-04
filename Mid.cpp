#include<iostream>
using namespace std;

int main()
{
	
	int balance = 1000;
	int option;
	int deposit;
	
	do{
	
	
	cout<<"Bank Management System : \n"<<endl;
	cout<<"1. Display the current balance\n";
	cout<<"2. Deposit a specified amount into the account\n";
	cout<<"3. Withdraw a specified amount from the account\n";
	cout<<"4. Exit\n"<<endl;
	cin>>option;
	
	switch(option){
	
		case 1:
			cout<<"\nYour current balance is "<<balance<<"\n"<<endl;
		    break;
		    
		  case 2:
		    cout<<"\nEnter amount you want to deposit\n";
		    cin>>deposit;
		    if(deposit <=0)
		       cout<<"\nInvalid value please enter positive number\n"<<endl;
		       else
		       	cout<<"\nYour remaining balance is : "<<balance=+deposit<<"\n"<<endl;
	     	break;
		
		case 3:
		    cout<<"\nEnter amount you want to Withdraw\n";
		    cin>>deposit;
		    if(deposit <=0)
		       cout<<"\nInvalid value please enter positive number\n"<<endl;
		       else
		       	cout<<"\nYour remaining balance is : "<<balance-deposit<<"\n"<<endl;
		    break;
		
		case 4:
		  cout<<"Thank you!"<<endl;;  
		  break;    	
	}
}
   while(option != 4);
		
	return 0;
}
