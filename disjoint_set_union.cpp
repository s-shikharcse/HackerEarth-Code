#include<bits/stdc++.h>
using namespace std;

const int MAX = 1030;
int arr[MAX], size[MAX];

void init(int n){
	for(int i=0;i<=n;i++){
		arr[i] = i;
		size[i] = 1;
	}
}

int root(int i){
	while(arr[i]!=i){
		arr[i] = arr[arr[i]];
		i = arr[i];
	}
return i;	
}

void weighted_union(int a, int b){
	int root_a = root(a);
	int root_b = root(b);
	if(root_a==root_b)
		return;
	if(size[root_a] < size[root_b]){
		arr[root_a] = arr[root_b];
		size[root_b] += size[root_a];	
		size[root_a] = 0;
	}
	else{
		arr[root_b] = arr[root_a];
		size[root_a] += size[root_b];
		size[root_b] = 0;
	}
}

int main(){
	int n,m,x,y;
	cin>>n>>m;
	init(n);
	for(int i=0;i<m;i++){
		cin>>x>>y;
		weighted_union(x,y);

		sort(size,size+n+1);
		for(int j=1;j<=n;j++){
			if(size[j])
				cout<<size[j]<<" ";
		}
		cout<<"\n";
	}
}