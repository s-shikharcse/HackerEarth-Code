#include<iostream>
#include<string.h>
using namespace std;
int count(char);
int main()
{
char s[100];
char c;
int l,k,sm;
sm=0;
cin>>s;
l=strlen(s);
for(int i=0;i<l;i++)
{
c=s[i];
k=count(c);
sm=sm+k;
}
cout<<sm;
}

int count(char x)
{ int sum;
switch(x){
case '0':sum=6;
       break;
case '1':sum=2; 
       break;
case '2':sum=5;
       break;
case '3':sum=5;
       break;
case '4':sum=4;
       break;
case '5':sum=5;
       break;
case '6':sum=6;
       break;
case '7':sum=3;
       break;
case '8':sum=7;
       break;
case '9':sum=6;
       break;
}
return sum;
}


