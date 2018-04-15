#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
	int count_equal=0;
		for(int i=0;i<n;i++){
			if(count_equal==0) cout<<s[i]<<endl;
			if((i<n-1)and(s[i]==s[i+1])and(count_equal==0)){
				count_equal++; 
			}
			else if((s[i]!=s[i+1])and(count_equal!=0))
				count_equal=0;
		}		
	}
}