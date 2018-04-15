#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
   int t;
   long int l;
   cin>>t;
   string s;
   char temp;
   for(int i=0;i<t;i++)
   {
   	cin>>s;
   	l=s.length();
   	for(long int i=0;i<l-1;i++)
   	{
   		long int min=i;
   		for(long int j=i+1;j<l;j++)
   		{
   			if(s[j]<=s[min])
   			{
   				min=j;
   			}
   		}
   		temp=s[i];
   		s[i]=s[min];
   		s[min]=temp;
   	}
   	int count,count2,count3=0;
   	for(long int i=0;i<l;i++)
   	{  
   	   count2=0;
           count=0;
		if(s[i]!=s[i+1])
   		count2++;
                while(s[i]==s[i+1])
   			{
   				count++;
   				i++;
   			}
   		
      		count3=count2+(2*count);
   	}
   	cout<<fixed;
   	cout<<setprecision(6);
   	cout<<count3/float(l)<<endl;
   }
}

