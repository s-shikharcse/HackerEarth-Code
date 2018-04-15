/*very cool numbers program of Hackerearth*/
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
//#include<stdlib.h>
using namespace std;
int binary(long int);
int main()
{
int t,count1,s,k;
long int r;
cin>>t;
count1=0;
	for(int i=0;i<t;i++)
	{
	cin>>r>>k;
	int count_array [r];
		for(long int j=1;j<=r;j++)
		{
		s=binary(j);
		count_array [j-1]=s;
		}	
	for(int p=0;p<r;p++)
	{
	if(count_array [p]>=k)
	count1++;
	}
     cout<<count1+1<<"\n";
    }
}

int binary(long int x)
{
int count,d,i;
char c;
i=count=0;
string str;
	while(x!=0)
	{
	d=x%2;
	str [i]=d;
	x=x/2;
	i++;
	}
reverse(str.begin(),str.end());
for(int q=1;q<i;q++)
{
c=str[q];
if(c=='0')
 {
  if((str[q-1]=='1')&&(str[q+1]=='1'))
   count++;
 }
}
return count;
}
