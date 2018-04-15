#include<bits/stdc++.h>
#define MAX 500005
using namespace std;


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n, q, a[MAX], type, x, y;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<q;i++){
		cin>>type;
		if(type==1){
			cin>>x>>y;
			a[x-1] = y;
		}
		else if(type==2){
			cin>>x;
			long long sum = 0;
			for(int i=0;i<n;i++){
				sum += floor(a[i]/x);
			}
			cout<<sum<<"\n";
		}
	}
}