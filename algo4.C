#include <iostream>
#include<string.h>
#include<string>
using namespace std;

char * bubblesort(char *,int);
int main()
{
    int n,l,gp=0;
    cin>>n;
    string s[n];
    char s1[100];
    char *s2;
    
    for(int i=0;i<n;i++)
    {
    	cin>>s1;
    	l=strlen(s1);
    	s2=bubblesort(s1,l);
    	s[i]=s2;
    }
    for(int i=0;i<n-1;i++)
    {
    	string temp;
    	for(int j=0;j<n-1;j++)
    	{
    		if(s[j].compare(s[j+1])>0)
    		{
    			temp=s[j];
    			s[j]=s[j+1];
    			s[j+1]=temp;
    		}
    	}
    }
   
    for(int j=0;j<n;j++)
    {  
       int count=0;
       for(int k=j+1;k<n;k++)
       {
       	if(s[j].compare(s[k])==0)
       	{
       		count++;
       		j++;
       	}
       	//j=j+count;  
       	//yes i figured out....this is resulting into segmentation fault
       }
       if(count)
       {
       	gp++;
       }
    }
    cout<<gp;
}

char *bubblesort(char *x,int l1)
{
	char temp;
 for(int j=0;j<l1-1;j++)
 {
 	for(int k=0;k<l1-1;k++)
 	{
 		if(x[k]>x[k+1])
 		{
 			temp=x[k];
 			x[k]=x[k+1];
 			x[k+1]=temp;
 		}
 	}
 }
 return x;
}

