//Mixing string program on hackerearth;
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,count;
	char c1,c2;
	cin>>n;
	int l[n];
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		l[i]=s[i].length();
	}
	for(int i=0;i<n;i++)
	{
         count=0;
	 for(int j=0;j<l[i];j++)
	 {
	 	c1=s[i].at(j);
	 	for(int k=0;k<l[i+1];k++)
	      {
	    	c2=s[i+1].at(k);
	    	if(c1==c2)
		{count++;
                 break;}
	    	
	      }
	 	
	 	
	 }
	
	
     }
