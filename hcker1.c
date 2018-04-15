#include<stdio.h>
#include<string.h>
int main(){
int l;
int c,i;
char s[100];
scanf("%s",&s);
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

printf("%s",s);
}
