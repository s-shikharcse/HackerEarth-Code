#include<iostream>
#include<string>
using namespace std;

int main()
{
string c1="Hello";
string c2="World";
string c3=c1;
c1.append(c2);
cout<<c1;
cout<<c3;
}

