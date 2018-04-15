#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,a[1005];
	cin>>t;
	while(t--){
		long long sum = 0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			while(a[i]%2 == 0){
				a[i] = a[i]/2;
				sum = sum+1 ;
			}
		}
		if(sum%2==0) 
			cout<<"Alan\n";
		else
			cout<<"Charlie\n";
	}
}