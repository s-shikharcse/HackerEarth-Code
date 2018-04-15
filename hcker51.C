#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long int T,count,t,a,b,c,d,A,B,C;
    unsigned long long int k,f;
    cin>>t;
    for(long int i=0;i<t;i++)
    {   f=0;
    	T=0;
    	cin>>a>>b>>c>>d>>k;
    	while(f<=k)
    	{   
            T=1;
    	    A=a*pow(T,3);
    	    B=b*pow(T,2);
    	    C=c*T;
    	    f=A+B+C+d;
    	    T++;
    	}
    	cout<<T;
    }
}


