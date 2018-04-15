#include<iostream>
#include<string.h>
using namespace std;
int main()
{ int count2,tc,l;
  char w[200];
  char c;
cin>>tc;
for(int i=0;i<tc;i++)
{
 count2=0;
 cin>>w;
 l=strlen(w);
 for(int j=0;j<l;j++)
 { 
  c=w[j];
  switch(c){
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':break;
   default :count2++;  
           }
}
cout<<(count2-3)<<'/'<<l;
}
}
