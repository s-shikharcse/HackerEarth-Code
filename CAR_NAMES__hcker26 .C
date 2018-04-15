#include<iostream>
#include<string>
using namespace std;

int main()
{
int l,t,count,count1,m;
char c,c1;
cin>>t;
string s[t];
for(int i=0;i<t;i++)
{
count=0;
count1=0;
cin>>s[i];
l=s[i].length();
m=l/3;
for(char x='a';x<'z';x++)
{
for(int w=0;w<l;w++)
{
c1=s[i][w];
if(c==x)
{count1++;
continue;}
}
}
if(count1>3)
cout<<"Not OK\n";
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
