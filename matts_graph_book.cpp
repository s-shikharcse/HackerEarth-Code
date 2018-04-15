#include<bits/stdc++.h>
#define MAX 100050
using namespace std;

bool visited[MAX];
vector<int>adj[MAX];
int ans = 1;

void dfs(int start){
	visited[start] = true;
	ans++;
	for(int i=0;i<adj[start].size();i++){
		if(visited[adj[start][i]] == 0)
			dfs(adj[start][i]); 
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	int n,k,a,b,x;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cin>>x;
	vector<int> :: iterator itr; 
	
	while(! adj[x].empty()){
		int temp = adj[x].back();
		adj[x].pop_back();

		itr = find(adj[temp].begin(),adj[temp].end(),x);
		adj[temp].erase(itr);
	}

	dfs(1);
	if(ans == n) cout<<"Connected\n";
	else cout<<"Not Connected\n";
}