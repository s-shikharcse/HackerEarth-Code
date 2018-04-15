/*Dual Issue Problem on hackerearth*/
#include <iostream>
using namespace std;

int main()
{
    int t,n,count1,count,prod,max,p;
    int b[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {   count1=0;
        p=0;
        prod=0;
        max=0;
    	cin>>n;
    	int a[n];
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[j];
    	}
    	for(int k=0;k<n;k++)
    	{        count=0;
    		 for(int l=1;l<=a[k];l++)
    		{
    			if((a[k]%l==0)&&(a[k]!=1))
    			count++;
    		}
    		if(count==2)
    		{
    			b[p]=a[k];
    			p++;
    		}
               else
                count1++;
    	}
    	if(count1==n)
    	{
        cout<<"-1"<<endl;
        continue;
        }
    	for(int m=0;m<p;m++)
    	{
    		for(int q=0;q<p;q++)
    		{
    		    prod=b[m]*b[q];
    		    if(prod>max)
    		    max=prod;
    		}
    		
    	}
      cout<<prod<<endl;
    	
    }
}

