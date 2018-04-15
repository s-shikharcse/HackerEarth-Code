#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
int w,t,m,l,count;
cin>>t;
char s[t][];
for(int i=0;i<t;i++)
{
cin>>s[i];
m=0;
count=0;
l=strlen(s[i][0]);
for(int k=0;k<l;k++)
{
for(char x='a';x<='z';x++)
{
if(s[k][m]==x)
count++;
}
m++;
}

if(count==l)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";

}
}
