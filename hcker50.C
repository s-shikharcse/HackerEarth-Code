#include <iostream>

using namespace std;

int asum()
{
	int a,b,c,d,k,i,t;
	/* You can simply use this
	cin>>a>>b>>c>>d>>k;
	Instead of separately calling cin 5 times*/
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>k;
	int r=0;
	/* 
	IMPORTANT: This approach is expensive because it will perform K iterations. 
	Consider using an approach that uses LogK iterations.
	More on :
	http://w...content-available-to-author-only...t.com/data_structures_algorithms/asymptotic_analysis.htm
	*/
	for(i=0;i<k;i++)
	{
		r= (a*i*i*i)+(b*i*i)+(c*i)+d;
		if(r<k)
			t=r;	// YOU DON'T HAVE TO RETURN 'r' !! YOU NEED TO RETURN 'i'
					// USE "t=i;" and consider using a break statement as well
	}
	return t;
}

int main()
{
	int t,i,b;
	cin>>t;
	for(i=0;i<t;i++)
	{
		b=asum();
		cout<<b<<endl;
	}
	return 0;
}
