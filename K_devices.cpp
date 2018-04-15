#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, k;
	int x[MAX], y[MAX];
	double distance, check[MAX];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		cin>>y[i];
	}


	for(int i=0;i<n;i++){
		distance = x[i]*x[i] + y[i]*y[i];
		check[i] = sqrt(distance);
		//cout<<check[i]<<"\n";
	}

	sort(check,check+n-1);
	cout<<ceil(check[k-1])<<"\n";
}
