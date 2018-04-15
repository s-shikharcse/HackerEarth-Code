#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,q,type,l,r,index;
	char ch;
	string s;
	cin>>n>>q;
	cin>>s;

	for(int i=0;i<q;i++){
		cin>>type;
		if(type==1){
			cin>>index>>ch;
			s[index-1] = ch;
		}
		else{
			cin>>l>>r;
			string s1 = s.substr(l-1,r-l+1);
			string s2 = s1;
			reverse(s1.begin(),s1.end());
			if(s1==s2)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}

}