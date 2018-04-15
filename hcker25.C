#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
int m,l,t,n,count2,count;
char c;
cin>>t;
string s[t];
for(int i=0;i<t;i++)
{   count=0;
    count2=0;
	cin>>s[i];
	l=s[i].length();
  for(char x='a';x<'z';x++)
{ 
for(int w=0;w<l;w++)
{
 if (x==s[i][w])
 {count2++;
 break; 
 }
}
}
if(count2>3)
{
cout<<"Not OK\n";
exit (0);
}	
        m=l/3;
	for(int j=0;j<l;j=j+m)
	{
		c=s[i].at(j);
	for(int k=j;k<j+m;k++)
    {
    	if(c==s[i][k])
    	{
    		count++;
    		continue;
    	} 
    }	
		if(count==l)
		cout<<"OK\n";

	}
	
}
}

