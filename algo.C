#include <iostream>
using namespace std;
int binary(long int,long int,long int,long long int*);
int main()
{
   long int z; 
   long int n,q;
   cin>>n;
   long long int a[n],x;
   
   for(long int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   cin>>q;
   for(long int j=0;j<q;j++)
   {
   	cin>>x;
   	z=binary(0,n-1,x,a);
   	cout<<(z+1)<<endl;
   }
}
int binary(long int low,long int high,long int no,long long int *a1)
{
	long int mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(a1[mid]<no)
		low=mid+1;
		else if(a1[mid]>no)
		high=mid-1;
		else
		return mid;
		
	}
	return low;
}

