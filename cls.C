#include<iostream>
using namespace std;
class cls{
 int a,b;
public:
 void add(void);
 void multi(void);
 void getdata(void);
};
void cls::getdata()
{ 
cout<<"Enter the value of a & b";
cin>>a>>b; 
}
void cls::add(void)
{
cout<<"Addition of the two numbers is = "<<(a+b);
}
void cls::multi(void)
{
cout<<"The Multiplication of the two numbers is = "<<(a*b);
}
int main()
{ cls p;
p.getdata();
p.add();
p.multi();
}
