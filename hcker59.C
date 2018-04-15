#include <iostream>
#include<math.h>
using namespace std;


int prime(long int );

int main()
{
   int p,t;
   cin>>t;
   long int px,py,l,f;
   for(int i=0;i<t;i++)
   {
   	cin>>px>>py;
   	cin>>l>>f;
   	int face=1;
   	
   	while(l!=f)
   	{
   	 p=prime(l);
   	if(p==1)
   	{
   		if(face==1)
   		{
   			px=px-1;
   			face=4;
   			l++;
   		}
   		else if(face==3)
   		{
   			py=py+1;
   			face=1;
   			l++;
   		}
   		else if(face==2)
   		{
   			px=px+1;
   			face=3;
   			l++;
   		}
   	 }
   	 else if(p==0)
   	 {
   	 	if(face==4)
   	 	{
   	 		py=py+1;
   	 		face=1;
   	 		l++;
   	 	}
   	 	else if(face==1)
   	 	{
   	 		px=px+1;
   	 		face=3;
   	 		l++;
   	 	}
   	 	else if(face==3)
   	 	{
   	 		py=py-1;
   	 		face=2;
   	 		l++;
   	 	}
   	 }
   		
   		
   	}
   	
   	cout<<px<<" "<<py<<endl;
    }
}    

int prime(long int n)
{
	int count=0;
	for(long int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 1;
	}
	else 
	return 0;
}

