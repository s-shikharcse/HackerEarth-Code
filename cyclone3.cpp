#include <bits/stdc++.h>
using namespace std;

unsigned long long int x[2000005],y[2000005];

void calculate_subset(unsigned long long int x[],
	unsigned long long int a[],unsigned long long int n,
	unsigned long long int c){

	unsigned long long int s;
	for(int i=0;i<(1<<n);i++){
		s = 0;
		for(int j=0;j<n;j++){
			if(i & 1<<j)
				s ^= a[j];
		}
		x[i+c] = s;
	}
}

unsigned long long int solve_subset(unsigned 
	long long int a[],unsigned long long int k,int n){
calculate_subset(x,a,n/2,0);
calculate_subset(y,a,n-n/2,n/2);
int x_size = 1<<(n/2);
int y_size = 1<<(n-n/2);

sort(y,y+y_size);
unsigned long long int ans = 0;

for(unsigned long long int i=0;i<x_size;i++){
	bool p = binary_search(y,y+y_size,x[i]^k);
	if(p){
		ans++;
	}
}
return ans;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	unsigned long long int n,k,a[42];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	unsigned long long int ans = solve_subset(a,k,n);
	cout<<ans<<endl;
}