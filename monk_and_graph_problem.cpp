#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100050];
bool visited[100050];
stack<int> s;

int dfs(int start){
	int edges = 0;
	s.push(start);
	visited[start] = true;
	while(!s.empty()){
		int element = s.top();
		s.pop();

		for(int i=0;i<adj[element].size();i++){
			edges++;
			if(!visited[adj[element][i]]){
				visited[adj[element][i]] = true;
				s.push(adj[element][i]);
			}
		}
	}
return edges;	
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int maxx = INT_MIN;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			int ans = dfs(i);
			maxx = max(maxx,ans/2);
		}
	}
	cout<<maxx<<"\n";
}