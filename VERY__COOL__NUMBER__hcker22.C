/*very cool numbers program of Hackerearth*/
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
int binary(int);
int main()
{
int count1,s,t,r,k;
cin>>t;
count1=0;
	for(int i=0;i<t;i++)
	{
	cin>>r>>k;
	int count_array [r];
		for(int j=1;j<=r;j++)
		{
		s=binary(j);
		count_array [j-1]=s;
		}	
	for(int p=0;p<r;p++)
	{
	if(count_array [p]>=k)
	count1++;
	}
     cout<<count1<<"\n";
        }
}

int binary(int x)
{
int count,d,i,l,u;
char c;
i=0;
u=0;
count=0;
string str,str2;
	while(x!=0)
	{
	d=x%2;
	str [i]=d;
	x=x/2;
	i++;
	}
l=str.size();
for(int z=i-1;z>=0;z--)
{
str2[u]=str[z];
u++;
}
for(int q=1;q<l;q++)
{
c=str2[q];
if(c=='0')
 {
  if((str2 [q-1]=='1')&&(str2 [q+1]=='1'))
   count++;
 }
}
return count;
}
