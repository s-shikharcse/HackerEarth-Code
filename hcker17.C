#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

int main()
{
int l,count,k;
char s[100];
char c,c1;
cin>>s;
l=strlen(s);
k=l-6;
count=0;
for(int i=0;i<l;i++)
{ 
  c=s[i];
   for(int j=i+1;j<(i+6);j++)
   {
   c1=s[j];
   if(c1==c)
      {
       count++;
       continue; 
      }
   else if(count>=6)  
      {
       cout<<"Sorry, sorry!";
       exit(0);
      }
     else
      count=0;
   }
    if((count!=6)&&(i==(k+1)))
      cout<<"Good luck!";

}
if(l==1)
cout<<"Good luck!";
}

