#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int l,i,j,count,count1;
    count=0;
    count1=0;
    j=1;
    char s[100];
    
    l=strlen(s);

	for(i=0;i<l;i++)
	{
		if(s[i]==0)
		{
			if(j-i==1)
		     count++;
		}
		 
		else 
		{
			if(j-i==1)
		    count1++;
		}
		j++;
		
	}
	if((count1==6)||(count==6))
	cout<<"Good luck!";
	else
	cout<<"Sorry, sorry!";
}

