//STL version
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		set<string>s(n);
		string input;
		for(int i=0;i<n;i++){
			cin>>input;
			s.insert(input);
		}
		for(set<string>::iterator itr=s.begin();s!=s.end();s++)
			cout<<*itr<<" "; 
	}
}