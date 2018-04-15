#include<iostream>
using namespace std;

const int size=5;

class A
{
int a[size];
public:
A()	
{
for(int i=0;i<5;i++)
cin>>a[i];
}
A(int *x)
{
for(int i=0;i<5;i++)
a[i]=x[i];
}

int operator [] ( int k)
{
return a[k];
}
};



int main()
{
int x[5]={1,2,3,4,5};
A shikhar(x);
cout<<shikhar[3];
}
