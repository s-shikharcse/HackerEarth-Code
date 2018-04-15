#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

vector<int> adj[MAX];
bool visited[MAX] ;
int ans = 0;

void dfs(int start){
	visited[start] = true;
	ans++;
	for(int i=0;i<adj[start].size();i++){
		if(visited[adj[start][i]] == false)
			dfs(adj[start][i]);
	}
}

/*void initialize(){
	for(int i=0;i<MAX;i++)
		visited[i] = false;
}*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,a,b,head;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cin>>head;
	//initialize();
	dfs(head);
	/*for(int i=1;i<m;i++){
		if(visited[i]==false)
			ans++;
	}*/
	cout<<n-ans<<"\n";
}