#include<iostream>
using namespace std;
class Employee
{
int emp-no[100];
float salary[100];
int count;
public:
void inputdata();
void display();
void CNT()
{
count=0;
}
void remove();
void displaysum();
};

void Employee :: inputdata()
{
cout<<"Enter emp-no.";
cin>>emp-no[count];
cout<<"Enter Salary";
cin>>salary[count];
count++;
}

void Employee ::display()
{
cout<<"\n emp-no salary\n";
for(int i=0;i<count;i++)
{
cout<<"\n"<<emp-no[i];
cout<<" "<<salary[i];
}
cout<<"\n";
}

void Employee ::remove()
{


}


}
