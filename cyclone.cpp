#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
ull x[2000005], y[2000005];

void calculate_subarray(ull a[], ull x[], int n, int c){
	for(int i=0;i<1<<n;i++){
		ull s = 0;
		for(int j=0;j<n;j++){
			if(i & 1<<j){
				s ^= a[j+c]; 
			}
		}
		x[i] = s;
	}
}

void solve_subset_sum(ull a[], int n){
	calculate_subarray(a,x,n/2,0);
	calculate_subarray(a,y,n-n/2,n/2);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	ull k;
	cin>>n>>k;
	ull a[41];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

    solve_subset_sum(a,n);
	
	unordered_map <int,int> freq;
	for(ull i=0;i<1<<(n-n/2);i++){
		freq[y[i]]++;
	}
	ull ans = 0;
	for(ull i=0;i<1<<(n/2);i++){
		ans += freq[x[i]^k];
	}
	cout<<ans<<endl;
}



