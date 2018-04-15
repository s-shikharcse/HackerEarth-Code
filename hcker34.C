#include<iostream>
#include<math>
using namespace std;
int main()
{
int n,diffa,diffb,a_max,b_max;
cin>>n;
a_max=0;
b_max=0;
int a[n],b[n];
for(int i=0;i<n;i++)
{
cin>>a[i]>>b[i];
}
for(int j=0;j<n-1;j++)
{
diffa=abs(a[j]-a[j+1]);
diffb=abs(b[j]-b[j+1]);
if(a_max<diffa)
a_max=diffa;
if(b_max<diffb)
b_max=diffb
}
if(a_max>b_max)
cout<<"Dom"<<(a_max-b_max);
else if(a_max<b_max)
cout<<"Brian"<<(b_max-a_max);
else
cout<<"Tie";


}
