#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s; 
	int even=0;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]-'0')%2==0)
			even++;
	}
	for(int j=0;j<s.length();j++)
	{
		if((s[j]-'0')%2!=0)
			cout<<even<<" ";
		else
			cout<<even--<<" ";
    }
}