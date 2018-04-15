#include<bits/stdc++.h>
#define MOD 1000000007;
using namespace std;
 
const int MAX = 1e5+60;
int arr[MAX],size[MAX];
long long int fact[MAX];
 
void calc_fact(){
	fact[0] = fact[1] = 1;
	for(int i=2;i<MAX;i++){
		fact[i] = i*fact[i-1];
		fact[i] %= MOD;
	}
} 

void init(int n){
	for(int i=0;i<n;i++){
		arr[i] = i;
		size[i] = 1;
	}
}
 
int root(int x){
	while(arr[x] != x){
		arr[x] = arr[arr[x]];
		x = arr[x];
	}
	return x;
}
 
void union1(int a, int b){
	int root_a = root(a);
	int root_b = root(b);
	if(root_a == root_b)
		return;
	if(size[root_a] < size[root_b]){
		arr[root_a] = root_b;
		size[root_b] += size[root_a];
	}
	else{
		arr[root_b] = root_a;
		size[root_a] += size[root_b];
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,u,v;
	cin>>n>>m;
	init(n);
	calc_fact();
	for(int i=0;i<m;i++){
		cin>>u>>v;
		union1(u,v);
	}
	/*for(int i=0;i<=n;i++){
		cout<<"array :"<<arr[i];
		cout<<" size :"<<size[i];
		cout<<endl;
		
	}*/
	unsigned long long int ans = 1,r;
	for(int i=1;i<=n;i++){
		r = root(i);
		if(r == i){ 
			ans *= fact[size[i]];
		    ans %= MOD;
		}	
	}
	cout<<ans;
}
