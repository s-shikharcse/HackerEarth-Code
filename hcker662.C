#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long int m;
    for(int i=0;i<t;i++)
    {
    	cin>>m;
     long long int len[m],d[m];
    for(long int j=0;j<m;j++)
    {
    	cin>>len[j]>>d[j];
    }
    long int sum=0;
    for(long int j=0;j<m;j++)
    {
    	for(long int k=0;k<len[j];k++)
    	{
    		sum+=d[j];
    	}
    }
    long int sum2=0;
    long int dd;
   do{
    while(sum!=0)
    {
    dd=sum%10;
    sum2+=dd;
    sum=sum/10;
    }
    sum=sum2;
    }while(sum/10!=0);
   
    cout<<sum<<endl;
    
    }
}

