#include <iostream>
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
   	int left=0;
   	int right=0;
   	while(l!=f)
   	{
   	 p=prime(l);
   	 if(p==1)
   	 {  //right=1;
   	    if(((left==0)&&(right==0)))
   	    {
   	 	px=px-1;
   	 	l++;
   	 	left=1;
   	 	right=0;
   	    }
   	    if(right==1)
   	    {
   	    	py=py+1;
   	    	l++;
   	    	left=1;
   	    	right=0;
   	    }
   	 }
   	 
   	 else if(p==0)
   	 {
   	 	if(left==1)
   	 	{   
   	 		py=py+1;
   	 		l++;
   	 		right=1;
   	 		left=0;
   	 	}
   	 	else if((left==0)&&(right==1)) 
   	 	{
   	 		px=px+1;
   	 		l++;
   	 		right=1;
   	 		left=0;
   	 	}
   	 	else if((left==0)&&(right==0))
   	 	{
   	 		px=px+1;
   	 		//right=1;
   	 		left=0;
   	 	}
   	 	else if(left==0)
   	 	{
   	 		py=py-1;
   	 	}
   	 	
   	   }
   	 
   	}
   	cout<<px<<" "<<py<<endl;
   }
}

int prime(long int n)
{
	int count=0;
	for(long int i=1;i<=n;i++)
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

