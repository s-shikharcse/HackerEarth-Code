#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,m,q;
	cin>>n>>m>>q;

	long long sum = 0;
	int p,cnt,a[q],b[q];
	for(int i=0;i<m;i++){
		cin>>p>>cnt;
		sum += p;
		int arr[cnt];
		for(int j=0;j<cnt;j++){
			cin>>arr[j];
		}
	}
	for(int i=0;i<q;i++){
		cin>>a[i]>>b[i];
	}
	cout<<m<<"\n";
	for(int i=0;i<m;i++){
		cout<<i+1<<" ";
	}
}