#include<iostream>
#include<string>
using namespace std;
char binary(int);
int main()
{
//char s1[100];
int t;
cin>>t;
binary(t);
}

char binary(int m)
{   
	char s[100];
	int d;
	long int j=0;
	while(m!=0)
	{  
       d=m%2;
       s[j]=d;
       m=m/2;
       j++;
	}
 cout<<s;
	
}
