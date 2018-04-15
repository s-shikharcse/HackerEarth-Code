#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int m,n,k,count,max,l;
		
	int count1[1440];
	char s[1440];
	cin>>n;
	for(int i=0;i<n;i++)
	{       k=0;
		max=0;
                cin>>s;
		
		for(int j=0;j<1440;j++)
		{
		if((s[j]=='C')||(s[j+1]=='C'))
		{count++;}
		else if((s[j]=='S')||(s[j]=='E'))
		continue;
		else if((s[j]=='C')&&(s[j+1]==('E'||'S')))
		 {count1[k]=count;
                  count=0;
                  k++;}
		m=k;
                }
        
        for(l=m-1;l>=0;l--)
        { if(count1[l]>max)
           max=count1[l];
        }
       cout<<max;
			
     }	

    
}
