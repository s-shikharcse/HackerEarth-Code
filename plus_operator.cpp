#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
complex(){}
complex(int a,int b)
{
x=a;
y=b;
}
void getdata()
{
int a,b;
cout<<"Enter the value of x"<<endl;
cin>>a;
x=a;
cout<<"Enter the value of y"<<endl;
cin>>b;
y=b;
}
complex operator + (complex c)
{
  complex temp;
  temp.x =x+c.x;
  temp.y=y+c.y;
  return temp;
}
void putdata();
};

void complex :: putdata()
{
cout<<x<<"+"<<y<<"j"<<endl;
}

int main()
{
complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3=c1+c2;
c3.putdata();
}
