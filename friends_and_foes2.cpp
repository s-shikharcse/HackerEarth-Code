#include<bits/stdc++.h>
using namespace std;
 
const int MAX = 1e5+60;

int arr[MAX],size[MAX];
int cnt[MAX] = {0};
bool present[MAX] = {true};

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
	}
	else{
		arr[root_b] = root_a;
		size[root_a] += size[root_b];
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m1,m2,u,v,x,y,ans=0,sz,maxx = INT_MIN ;
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
		
		if(root_x == root_y)
			present[root_x] = false;
	}	
		/*if(root_x != root_y){
			if(present[root_x]){
				sz = size[root_x];
				maxx = max(maxx,sz);	
			}
			if(present[root_y]){
				sz = size[root_y];
				maxx = max(maxx,sz);
			}	
		}
		else{
			present[root_x] = false;
			maxx = INT_MIN;
		}*/

		/*if(root_x != root_y){
			if(present[root_x]){
			    sz = size[root_x];
			    ans += sz;
			    cnt[root_x] += 1;
			}
			if(present[root_y]){
			    sz = size[root_y];
			    ans += sz;
			    cnt[root_y] += 1;
			}
		}
		else if((root_x==root_y)and(present[root_x])){
			ans = ans - (cnt[root_x] * size[root_x]) - (cnt[root_y] * size[root_y]);
			present[root_x] = false;
		}*/
	for(int i=0;i<m1;i++){
		int 
		if(present[])
	}
	cout<<maxx;
}
