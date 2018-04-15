//Monk and Power of Time
#include <iostream>
using namespace std;

int main()
{
   int count,n,m;
   count=0;
   cin>>n;
   int a[n],b[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
for(int i=0;i<n;i++)
   {
        cin>>b[i];
   }
   for(int i=0;i<n;i++)
   {
   	while(b[i]!=a[i])
   		{
   		m=a[i];
   		
   	 	for(int j=0;j<n-1;j++)
   	 	{
   	 		a[j]=a[j+1];
   	 	}
		a[n-1]=m;
   	 	count++;
   		}
   	count++;	
   }
   cout<<count;
   
}

