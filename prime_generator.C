#include<iostream>
using namespace std;

/*enum 
{
noprime,prime
};
*/
int main()
{
int t;
cin>>t;
long int n,m;
for(int i=0;i<t;i++)
{
cin>>m>>n;
for(long int j=m;j<=n;j++)
{
int flag=1;//prime
for(long int k=2;k<j;k++)
{
	if(j%k==0)
	{
	flag=0;//noprime
	break;
	}
	
}
if(flag==1)
cout<<j<<endl;
}
}
return 0;
}

