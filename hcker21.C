/*Complete string program on Hackerearth*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
int l,t,count;
cin>>t;
string s[t];
for(int i=0;i<t;i++)
{
count=0;
cin>>s[i];
l=s[i].length();
for(char k='a';k<='z';k++)
{
for(int j=0;j<l;j++)
{
if(s[i][j]==k)
count++;
break;
}

}
if((count%26)==0)
cout<<"YES\n";
else
cout<<"NO\n";
}
}
