#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int query[q][3];
	int *a = new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
    for(int i=0;i<q;i++)
    {
    	cin>>query[i][0]>>query[i][1]>>query[i][2];
    	if(query[i][0] == 1)
    		swap(a[query[i][1]-1],a[query[i][2]-1]);
    	else
    	{
    		bool a[1000002];
    		fill(a,a+1000002,true);
    		for(int  i=2;i<=sqrt(1000002);i++)
    		{
    			for(int j=i*i;j<1000002;j=j+i)
    				a[j]=false;
    		}
    	}
    }

}