#include<iostream>
using namespace std;
int main()
{int i,l,n,w,h;
cin>>l>>n;
for(i=1;i<=n;i++)
{
cin>>w>>h;
if(w>=l&&h>=l)
 { if(w==h)
   cout<<"ACCEPTED";
   else
   cout<<"CROP IT";
 }
else
 cout<<"UPLOAD ANOTHER";
}
}
