/*bool data type sieve*/
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

const int SZ=5000001;
const int SR=sqrt(SZ);

int main()
{
bool prime[SZ];
fill(prime,prime+SZ-1,true);
prime[0]=false;
prime[1]=false;
for(int i=2;i<=SR;i++)
{
 if(prime[i]==true)
 {
 for(long long int j=i*i;j<SZ;j=j+i)
 prime[j]=false;
 }
}
int k=0;
int p[SZ],q[SZ];
for(int i=0;i<SZ;i++)
{
if(prime[i]==true)
{
p[k]=i;
q[k]=k;
k++;
}
}

int Q,n;
cin>>Q;
while(Q--)
{
cin>>n;
int pos=binary_search(q,q+k,n);
cout<<p[pos]<<endl;
}
}
