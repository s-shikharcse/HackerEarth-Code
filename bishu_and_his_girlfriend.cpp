#include<bits/stdc++.h>
#define MAX 1050
using namespace std;

vector<int>adj[MAX];
int visited[MAX] = {false};
int level[MAX] = {0};

int dfs(int start,int length){
	visited[start] = length;
	for(int i=0;i<adj[start].size();i++){
		if(visited[adj[start][i]]==0)
			dfs(adj[start][i], length+1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,x,y,q,input;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int length = 1;
	dfs(1,length);
	cin>>q;
	int min_index = INT_MAX, min_num = 0;
	for(int i=0;i<q;i++){
		cin>>input;
		if(visited[input]<min_index){
			min_index = visited[input];
			min_num = input;
		}
	}
cout<<min_num<<"\n";
}