	#include<iostream>
	using namespace std;
	int palindrome(int);
	int main()
	{
	int t,a,b,c,count;

	cin>>t;
	for(int i=1;i<=t;i++)
	{count=0;
	cin>>a>>b;
	for(int j=a;j<=b;j++)
	{
	c=palindrome(j);
	if (c==j)
	count++;
	}
	cout<<count<<"\n";
	}
	}

	int palindrome(int x)
	{

	int d,s=0;
	while(x!=0)
	{
	d=x%10;
	s=s*10+d;
	x=x/10;
	}

	return s;
	}
