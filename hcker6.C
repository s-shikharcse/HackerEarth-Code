#include<iostream>
using namespace std;
int main(){
int answer,i,n,a[1000];
answer=1;
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];
 answer=(answer*a[i])%(1000000000+7);
}
cout<<answer;
}
