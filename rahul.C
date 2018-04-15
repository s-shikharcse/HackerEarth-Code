#include<iostream>
#include<string.h>
using namespace std;

int main()
{

char s[]="PGATC";
for(char x='A';x<='Z';x++)
{
for(int i=0;i<strlen(s);i++)
{
if(s[i]==x)
cout<<x;
}
}

}
