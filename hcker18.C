#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int binary(int);
int main()
{
int l,t,count1,r,k;
long int count_array[100000];
count1=0;
int c;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>r>>k;
  for(int m=1;m<=r;m++)
  {
   c=binary(m);
   count_array[m-1]=c;
  }
  for(int p=0;p<r;p++)
  {
   if(count_array[p]>=k)
   count1++;
  }

   cout<<count1;
 }
}

int binary(int x)
{
int l,k,count,i=0,d;
char s[100];
count=0;
while(x!=0)
{
d=x%2;
s[i]=d;
x=x/2;
i++;
}
l=strlen(s);
     for(int j=0;j<l;j++)
      {    if(k==(l-2))
	   break;
          {
       if((s[j]=='1')&&(s[j+1]=='0')&&(s[j+2]=='1'))
       count++;
      }
     } 
return (count); 
}
