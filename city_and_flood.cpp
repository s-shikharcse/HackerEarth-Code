#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+50;
int arr[MAX],size[MAX];
set<int> s;

void init(int n){
	for(int i = 0;i<=n;i++){
		arr[i] = i;
		size[i] = 1;
		s.insert(1);
	}
} 

int root(int x){
	while(arr[x] != x){
		arr[x] = arr[arr[x]];
		x = arr[x];  
	}
return x;	
}

void union1(int a,int b){
	int root_a = root(a);
	int root_b = root(b);
	
	if(root_a == root_b){
		//cout<<0<<"\n";
		//cout<<"yhi h";
		return;
	}
	if(size[root_a] < size[root_b]){
		arr[root_a] = root_b;
		//cout<<size[root_b] - size[root_a]<<"\n";
		size[root_b] += size[root_a];
		size[root_a] = 0;
		s.insert(size[root_b]);	
	}
	else{
		arr[root_b] = root_a;
		//cout<<size[root_a] - size[root_b]<<"\n";
		size[root_a] += size[root_b];
		size[root_b] = 0;
		s.insert(root_a);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int n,k,x,y,count = 0;
	
	cin>>n>>k;
	init(n);
	for(int i=0;i<k;i++){
		cin>>x>>y;
		union1(x,y);
		/*int max = INT_MIN, min = INT_MAX;
		for(int i=1;i<=n;i++){
			if(size[i] == 0)
				continue;
			if(max < size[i])
				max = size[i];
			if(min > size[i])
				min = size[i];
		}
		cout<<max - min<<"\n";
		*/	
	int max = *(s.begin());
	int min = *(s.rbegin());
	cout<<max-min<<"\n";
	}
}