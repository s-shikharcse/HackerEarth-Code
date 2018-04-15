#include<iostream>
using namespace std;
class shikhar
{
int a[5];
public:

shikhar ()
{
cout<<"Constructor Created"<<endl;
}

friend istream & operator >> (istream & obj)
{
for(int i=0;i<5;i++)
{
cout<<"Enter the %d element "<<i<<endl;
din>>obj.a[i];
}
return din;
}

friend ostream & operator << (ostream & obj)
{
for(int i=0;i<5;i++)
{
dout<<obj.a[i];
return dout;
}
}
}

int main()
{
shikhar s;
cout<<"Enter the value in the created object"<<endl;
cin>>s;
cout<<"The value enterd by user are as follows : "<<endl;
cout<<s;

}
 
