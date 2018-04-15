#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s[n],s2,s3;
   for(int i=0;i<n;i++)
   {
   	cin>>s[i];
   }
   int l,flag,mid,count;
   count=0;
   for(int i=0;i<n;i++)
   {
   	l=s[i].length();
   	mid=l/2;
    s2=s[i].substr(0,mid);
    s3=s[i].substr(mid+1,l-mid);
   	cout<<s2<<endl;
   	cout<<s3;
   }
}

