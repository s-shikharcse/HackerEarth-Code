#include<bits/stdc++.h>
using namespace std;
 
const int MAX = 1e5+60;
int arr[MAX],size[MAX];
bool present[MAX];

void init(int n){
	for(int i=0;i<=n;i++){
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
		size[root_a] = 0;
	}
	else{
		arr[root_b] = root_a;
		size[root_a] += size[root_b];
		size[root_b] = 0;
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m1,m2,u,v,x,y,ans=0,sz;
	cin>>n>>m1;
	init(n);
	for(int i=0;i<m1;i++){
		cin>>u>>v;
		union1(u,v);
	}

	cin>>m2;
	for(int i=0;i<m2;i++){
		cin>>x>>y;
		int root_x = root(x);
		int root_y = root(y);
		if((root_x != root_y)and(!present[root_x])){
			sz = size[root_x];
			ans += sz;
			present[root_x] = true;
		}
		else if((root_x==root_y)and(present[root_x])){
			sz = size[root_x];
			ans -= sz;
			present[root_x] = false;
		}
	}
	cout<<ans;
}
