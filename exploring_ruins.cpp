#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int length_s = s.length();
	for(int i=0;i<length_s;i++)
	{
		if(s[i]=='?')
		{
			if((i==0)&&(s[i+1] != 'a' ))
				s[i] = 'a';
		    else if ((i==0)&&(s[i+1] == 'a' ))
				s[i] = 'b';
            if((i==length_s-1)&&(s[i-1] == 'a'))
            	s[i] = 'a';
            else if((i==length_s-1)&&(s[i-1] == 'b'))
            	s[i] = 'b';
			if((s[i-1] != 'a')&&(s[i+1] != 'a'))
				s[i] = 'a';
			else if((s[i-1] == 'a')||(s[i+1] == 'a'))
		        s[i] = 'b';
		}
	}
	cout<<s<<endl;
}