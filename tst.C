#include <iostream>
using namespace std;

int main()
{
   long int n;
   cin>>n;
   int x[n][2];
   
   for(long int i=0;i<n;i++)
   {
   	for(int j=0;j<2;j++)
   	{
   	cin>>x[i][j];
   	}
   }
   long int q;
   cin>>q;
   unsigned long long int r[q];
   for(long int i=0;i<q;i++)
   {
   	cin>>r[i];
   }

   for(long int i=0;i<q;i++)
   {
   	int count=0;
   	for(long int j=0;j<n;j++)
   	{
   		if((((x[j][0])*(x[j][0]))+((x[j][1])*(x[j][1]))-(r[i]*r[i]))<=0)
   		count++;
break;
   	}
   	cout<<count<<endl;
   }
}

