#include <iostream>
using namespace std;

int main() {
	
	// your code here
int t,flag;
long int k,k2,d,s;
cin>>t>>k;
for(int i=0;i<k;i++)
{
	cin>>k;
	while(1)
	{   
		flag=s=0;
		k++;
		k2=k;
		
		while(k!=0)
		{
			d=k%10;
			s=s*10+d;
			k=k/10;
		}
		if(s==k2)
		{
			flag=1;
			
		}
		if(flag==1)
		{
                    cout<<k2<<endl;
			break;
		}
	}
       
}
	return 0;
}
