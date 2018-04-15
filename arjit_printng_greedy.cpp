#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s,w;
	while(t--)
	{
		cin>>s>>w;
		sort(w.begin(),w.end());
		int length_w = w.length();
		int length_s = s.length();
		int j=0;
		for(int i=0;i<length_s;i++)
		{
			
          if(s[i]>w[j])
          {
          s[i] = w[j];
          j++;
          }
          if(j>=length_w)
				break;
		}
		cout<<s<<endl;
	}
	
}