#include<iostream>
#include<string>
using namespace std;
int main()
{
int count,k,m,n;
m=0;
count=0;
char c;
cin>>k;
string hate[10];
for(int i=0;i<k;i++)
{
cin>>hate[i];
}
cin>>n;
string s[n];
for(int j=0;j<n;j++)
{
cin>>s[j];
}
for(int w=0;w<n;w++)
{
count=0;
for(int l=0;l<k;l++)
{
if(s[w].compare(hate[l])==0)
 { count++;
   break;
 }
}
if(count!=1)
{
	c=char((int)s[w][0]-32);
	if(w<n-1)
    cout<<c<<'.';
    else
    cout<<c;
}
}

}
