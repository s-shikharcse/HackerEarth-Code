/*Magic words program on Hackerearth*/
#include<iostream>
#include<string>
using namespace std;
void rev(string);
int main()
{
int t,m;
cin>>t;
string s[t];
for(int i=0;i<t;i++)
{
cin>>s[i];
rev(s[i]);
}

}
void rev(string x)
{
string y,z;
int p,l2,l1,l,sum;
sum=0;
l=x.length();
for(int i=0;i<l;i++)
{
for(int j=i+1;j<l;j++)
{
p=0;
y=x.substr(i,j);
l2=y.length();
for(int k=l2-1;k>=0;k--)
{ 
 z[k]=y[p];
 p++;  
}
if(z.compare(y)==0)
 {
 l1=z.length();
 sum=sum+(l1*l1);
 }
else
continue;
}
}
cout<<(sum+l)<<"\n";
}
