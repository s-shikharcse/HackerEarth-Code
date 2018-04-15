#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1000002];
bool visited[1000002];
int level[1000002] = {0};
stack<int> s;

void dfs(int start,int count){
	visited[start] = true;
	level[start] = count;
	s.push(start);
	while(!s.empty()){
		int element = s.top();
		s.pop();
		for(int i=0;i<adj[element].size();i++){
			if(!visited[adj[element][i]]){
				visited[adj[element][i]] = true;
				level[adj[element][i]] = count;
				s.push(adj[element][i]);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	int t,n=0,k,a,b;
	char ch;

	//memset(visited,false,sizeof(visited));
	//memset(level,0,sizeof(level));

	cin>>t;
	while(t--){ 

		for(int i=0;i<1000002;i++){
			adj[i].clear();
			visited[i] = false;
			level[i] = 0;
		}
		
		cin>>n>>k;
		vector<pair<int,int> > nequal;
		for(int i=0;i<k;i++){
			cin>>a>>ch;
			if(ch=='='){
				cin>>b;
				adj[a].push_back(b);
				adj[b].push_back(a);
			}
			else{
				char c2;
				cin>>c2>>b;
				nequal.push_back(make_pair(a,b));
			}
		}

		int count = 0;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				 dfs(i,count);
				 count++;
			}
		}
		bool flag = false;
		for(int i=0;i<nequal.size();i++){
			if(level[nequal[i].first]==level[nequal[i].second]){
				cout<<"NO\n";
				flag = true;
				break;
			}
		}
		if(!flag)
			cout<<"YES\n";
	}
}