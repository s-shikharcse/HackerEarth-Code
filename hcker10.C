#include<iostream>
#include<string.h>
using namespace std;
int main()
{ int p,l,j,n,m;
  j=0;
   p=1;
char s[10],s1[10];
cin>>n;
for(m=1;m<=n;m++)
{
cin>>s;
l=strlen(s);
for(int i=l-1;i>=0;i--)
{ 
 s1[i]=s[j];
 j++;
}
if(strcmp(s,s1)==0)
cout<<"Palindrome \n";
else
{
 for(char x='a';x<='z';x++)
  { for(int k=1;k<=l;k++)
    {
     if(x==s[k-1])
     p=p*(k);
    } 
  }
  cout<<p;

}	
}
}

