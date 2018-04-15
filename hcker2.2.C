#include<iostream>
#include<string.h>
using namespace std;
int main(){
char s[100];
int i,count,l;
count=0;
cin>>s;
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]!=s[l-i-1])
{count=1;
break;}
}
if(count)
cout<<"NO";
else
cout<<"YES";

}
