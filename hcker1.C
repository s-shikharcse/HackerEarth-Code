#include<iostream>
#include<string.h>
using namespace std;
int main(){
int l,c,i;
char s[100];
cin>>s;
l=strlen(s);
for(i=0;i<l;i++)
{
 c=s[i];
 if(c>=65&&c<=90)
 {  c=c+32;
    s[i]=(char)c;
 }
 else 
 {  c=c-32;
  s[i]=(char)c;
 }

cout<<"Output"<<s;
}
