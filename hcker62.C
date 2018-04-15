#include <iostream>
using namespace std;

int main()
{
    int t;
    long int n;
    
    for(int i=0;i<t;i++)
    {   
    	int count=1;
    	cin>>n;
    	long long int a[n];
    	
    	for(long int j=0;j<n;j++)
    	{
    	 cin>>a[j];
    	}
    	
    	for(long int k=1;k<n;k++)
    	{
    		if(a[k]<=a[k-1])
    		{
    			count++;
    		}
    	}
    	cout<<count<<endl;
    }
}

