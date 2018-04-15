#include <iostream>
#include<string.h>
using namespace std;

int main()
{
 int l,count,i,j;
 
 char s[100];
    cin>>s;
    l=strlen(s);
    
    for(i=0;i<=9;i++)
    {count=0;
    	for(j=0;j<l;j++)
    	{
    		if(i==s[j])
    		count++;
    	}
       cout<<i<<count<<"\n";
    }
}
