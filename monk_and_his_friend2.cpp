#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int input;
		map<int,bool>present;
		for(int i=0;i<n;i++){
			cin>>input;
			present[input] = true;
		}
		for(int i=0;i<m;i++){
			cin>>input;
			if(present[input]==true)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
}