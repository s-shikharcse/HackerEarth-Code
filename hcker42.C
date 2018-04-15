#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    long int l,n;
    l=0;
    int count1;
    int count;
count=0;
    cin>>n;
    long long int a[n],b[n][2];
    for(long int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(long int j=0;j<n;j++)
    {  
    	for(long int k=j+1;k<n;k++)
    	{   
    	    b[l][0]=a[j];
    	    b[l][1]=a[k];
    		l++;
    	}

    }

    for(long int x=0;x<l;x++)
     {
    	for(long int z=x+1;z<l;z++)
    	{
    	 if((b[x][0]==b[z][0])&&(b[x][1]==b[z][1]))
    	 {
                  count1=1;
                  continue;
         } 
    	}
    	count=count+count1;
    }
    cout<<count;
}

