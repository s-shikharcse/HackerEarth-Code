#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n, a[100005], q, k;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	while(q--){
		cin>>k;
		long long build = 0;
		for(int i=0;i<n;i++){
			if(a[i]%k == 0)
				build++;
		}
		cout<<build<<"\n";
	}
}