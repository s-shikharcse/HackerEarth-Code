/*Bank Account*/
#include<iostream>
#include<string.h>
using namespace std;

class bank
{
char name[20];
int acc_no;
char acc_type[6];
float bal;

public:
 void getdata();
 void deposit();
 void withdraw();
 void display();
};

void bank:: getdata()
{
cout<<"Enter the name of the Account Holder : ";
cin>>name;
cout<<"Enter the account number : ";
cin>>acc_no;
cout<<"Account type : ";
cin.ignore();
cin>>acc_type;
cout<<"Enter the amount of money : ";
cin>>bal;
}

void bank:: deposit()
{
float m;
cout<<"Enter the money to be submitted : ";
cin>>m;
bal+=m;
}

void bank:: withdraw()
{
float m;
cout<<"Present balance in your account is : ";
cout<<bal;
cout<<"Enter the amount to be withdrawn : ";
cin>>m;
bal-=m;
}

void bank:: display()
{
cout<<name<<endl;
cout<<bal<<endl;
}

int main()
{
char choice[20];
bank customer[100];
int n;
cout<<"Enter the sr. no of the customer whose data is to be fetched : ";
cin>>n;
cin.ignore();
customer[n].getdata();
cout<<"Do you want to deposit or withdraw amount ";
cin>>choice;
	if(strcmp(choice,"deposit"))
	customer[n].deposit();
	else
	customer[n].withdraw();
customer[n].display();
return 0;
}























