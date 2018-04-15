#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
char s[100];
char s1[100];
int j,i,l;
j=0;
cin>>s;
s1=strrev(s);
/*l=strlen(s);
for(i=l-1;i>=0;i--)
{   
	s1[j]=s[i];
	j++;
}*/
if(strcmp(s1,s)==0)
cout<<"YES";
else 
cout<<"NO";
}
