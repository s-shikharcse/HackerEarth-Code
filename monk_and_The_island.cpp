#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int t,n,m,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int>island[n+1];
		for(int i=0;i<m;i++){
			cin>>x>>y;
			island[x].push_back(y);
			island[y].push_back(x);	
		}
		queue<int>q;
		int dis[n+1] = {0};
	    bool vis[n+1] = {false};
  		q.push(1);
		dis[1] = 1;
		vis[1] = false;
		while(!q.empty()){
			int p = q.front();
			q.pop();
			for(int i=0;i<island[p].size();i++){
				if(vis[i]==false){
					vis[i] = true;
				if(dis[island[p][i]]==-1){
					dis[island[p][i]] = dis[p] + 1;
					q.push(island[p][i]);
				}
			}
			}
		}
		cout<<dis[n]<<endl;
	}
}