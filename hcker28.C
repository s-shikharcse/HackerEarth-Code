#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int l,d,i,x=5;
i=0;
char c[100];
while(x!=0)
{
d=x%2;
c[i]=d;
x=x/2;
i++;
}
l=strlen(c);
for(int j=0;j<l;j++)
cout<<c[j];
}
