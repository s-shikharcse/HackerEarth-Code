#include <iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    int t,p;
    cin>>t;
    p=0;
    long int l_b,l_s;
    string b,s;
    char *bb,*ss;   
 for(int i=0;i<t;i++)
    {
    	cin>>b>>s;
    	l_b=b.length();
    	l_s=s.length();
      bb=new char[l_b+1];
      ss=new char[l_s+1];
      bb=&b;
      ss=&s;
    	p=strcspn(bb,ss);
    }
cout<<p;
}

