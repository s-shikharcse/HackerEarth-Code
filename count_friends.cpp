#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+50;
int arr[MAX], size[MAX];

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
	else //if(size[root_a] > size[root_b]){
	{	arr[root_b] = root_a;
		size[root_a] += size[root_b];
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,u,v;
	cin>>n>>m;
	init(n);
	for(int i=0;i<m;i++){
		cin>>u>>v;
		union1(u,v);
	}
	/*for(int i=0;i<=n;i++)
		{
			cout<<arr[i]<<" ";
		    cout<<"size :"<<size[i]<<"\n";
	}*/
	//cout<<endl;
	for(int i=1;i<=n;i++){
		int nof = root(i);
		//if(nof == i)
		//	cout<<0<<" ";
		//else
			cout<<size[nof]-1<<" ";
	}
}