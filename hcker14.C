#include<iostream>
using namespace std;
int rev(int);
int main()
{ 
 int d,k,tc,store1,store2,enc,n1,n2,sum;
 k=1;
 cin>>tc;
 for(int i=0;i<tc;i++)
{
 sum=0; 
 cin>>n1>>n2;
 store1=rev(n1);
 store2=rev(n2);
 enc=store1+store2;
 
 while(enc!=0)
{ 
  d=enc%10;
  if(d==0&&k==1)
  {
   enc=enc/10;
   continue;
  }
  k++;
  sum=sum*10+d;
  enc=enc/10;
}
cout<<sum;
}
}

int rev(int x)
{
int d,sum1;
sum1=0;
while(x!=0)
{
 d=x%10;
 sum1=sum1*10+d;
 x=x/10;
}
return(sum1);
}
