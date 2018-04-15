//Breadth First Search
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int n,a,b,x;
	cin>>n;
	vector<int>v[n+1];
	int level[n+1] = {0};
	bool vis[n+1] = {false};
	for(int i=1;i<=n-1;i++)
	{
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a); 
	}
    cin>>x;
	int count=0;
	queue<int>q;
	q.push(1);
	level[1]=1;
	vis[1]=true;
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		for(int i=1;i<=v[p].size();i++)
		{
			if(vis[v[p][i]]==false)
			{
				level[v[p][i]]=level[p]+1;
				if(level[v[p][i]]==x)
				count++;
				q.push(v[p][i]);
				vis[v[p][i]]=true;
			}
		}
	}
	cout<<count<<endl;
}