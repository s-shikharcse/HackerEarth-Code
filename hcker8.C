#include<iostream>
using namespace std;
int main(){
int i,max,j,con[200],n,ratng[200];
cin>>n;
for(i=0;i<n;i++)
{
cin>>ratng[i];
con[i]+=ratng[i];
if(con[i]<0)
}
max=0;
for(j=0;j<n;j++)
{
if(con[i]>max)
max=con[i];
}
if(max>0)
cout<<max;
else
cout<<'0';
}


