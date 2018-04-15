#include<iostream>
#include<stdio.h>
//#include<string>
using namespace std;

int main()
{
while(1)
{
int n;
cin>>n;
if(!n)
break;

//string s;
char s[4];
sprintf(s,"%d",n);
char y[2];
y[0]=s[2];
y[1]=s[3];
char x[2];
x[0]=s[1];
x[1]=s[0];

int yy,xx;

sscanf(x,"%d",&xx);
sscanf(y,"%d",&yy);
int p=xx*yy;
if(p==n)
cout<<"True"<<endl;
else
cout<<"False"<<endl;
}

}
