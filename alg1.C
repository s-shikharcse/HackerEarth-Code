#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  int t,flag;
  int x=0;
  long int n,l,d;
 
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	flag=0;
  	cin>>n;
  	if(n%21==0)
    {
    	cout<<"The streak is broken!"<<endl;
        continue;
    }    
    else
    {   
    	char c[10];
        
    	while(n!=0)
    	{
    		d=n%10;
    		c[x]=d;
    		x++;
    	}
    l=strlen(c);
    for(int j=0;j<l;j++)
    {
    	if(c[j]=='2')
    	for(int k=j+1;k<l;k++)
    	{
    		if(c[k]=='1')
    		{
                    flag=1;
                    break;
                }   
    	}
       if(flag==1)
       break;      
    }
    if(flag)
    cout<<"The streak is broken!"<<endl;
    else 
    cout<<"The streak lives still in our heart!"<<endl;
    }
  }
}

