#include<iostream>
#include<algorithm>
using namespace std;

int *f = new int[100000];

void init()
{
	for(int i=0;i<100000;i++)
		f[i]=-1;
    f[0]=f[1]=1; 
}

int fact(int n)
{
if(f[n]!=-1)
	return f[n];
else
{
	f[n] = (n*fact(n-1))%(1000000000+7); 
    return f[n];
}
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		init();
	    int ans = (fact(n))%(1000000000+7);
		cout<<ans<<endl;
	}
}