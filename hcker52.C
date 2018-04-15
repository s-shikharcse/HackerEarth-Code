#include <iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s[n];
   for(int i=0;i<n;i++)
   {
   	cin>>s[i];
   }
   string s1;
   for(int i=0;i<n;i++)
   {
   	s1=s[i];
   	for(int j=i+1;j<n;j++)
   	{
   		if(s1==(reverse(s[j].begin(),s[j].end())))
   		cout<<s1;
   	}
   }
   
}

