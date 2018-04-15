#include<iostream>
using namespace std;

int main()
{
	int t,l;
	cin>>t;
	while(t--)
	{
		cin>>l;
		int sum_upper=0;
		int sum_lower=0;
		int time = l;
		int *upper = new int[l-1];
		int *lower = new int[l-1];

		for(int i=0;i<l-1;i++)
        { 
			cin>>upper[i];
            if(upper[i]>(l-i+1))
            	sum_upper += upper[i]-(l-i);		
		}
		for(int i=0;i<l-1;i++)
		{
			cin>>lower[i];
		    if(lower[i]>(l-i+1))
		    	sum_lower += lower[i]-(l-i);
		}
		if(sum_lower>=sum_upper)
			time += sum_lower;
		else if(sum_upper>sum_lower)
			time += sum_upper;
        
        cout<<time<<endl; 
	}
}