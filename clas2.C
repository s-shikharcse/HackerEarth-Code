#include<iostream>
#include<string.h>
using namespace std;

class sstring
{
char *a;
public:
 sstring()
 {
  cout<<"constructor called"<<endl;
  cin>>a;
 }
char *getchar()
{
return a;
}
int operator ==(sstring s)
{
 if(strcmp(a,s.getchar())==0)
 return 1;
else return 0;
}
};

int main()
{
sstring s1,s2;
if(s1==s2)
cout<<"The string are comparable";
else 
cout<<"The string can't be compared";
}
