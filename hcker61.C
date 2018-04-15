#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    long int l1,l2;
    l1=s1.length();
    l2=s2.length();
  
    int count=0;
    for(long int i=0;i<l2;i++)
    {
    	long int j=0;
    	if(s1[j]==s2[i])
    	{   
    		
    		while(s1[j]==s2[i])
    		{
    			j++;
    			i++;
    		}
    		if(j==l1-1)
    		count++;

    	}


    }
    cout<<count;
}

