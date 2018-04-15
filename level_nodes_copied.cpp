#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <set>
#include <iterator>
#include <queue>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{int t,i,j,n,x,y;
cin>>n;
vector<int> v[n+1];
j=n-1;
while(j-->0)
{
cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);	
}
cin>>x;
int level[n];
bool vis[n];
for(i=0;i<n;i++)
{level[i]=0;
vis[i]=0;
}
queue<int>q;
int s=1;
q.push(s);
level[s]=1;
vis[s]=true;
while(!q.empty())
{
int p = q.front();
q.pop();
for( i = 0;i < v[ p ].size() ; i++)
{
if(vis[ v[ p ][ i ] ] == false)
{
//Setting the level of each node with an increment in the level of parent node
level[ v[ p ][ i ] ] = level[ p ]+1; 
q.push(v[ p ][ i ]);
vis[ v[ p ][ i ] ] = true;
}
}
}

int sum=0;
for(i=1;i<=n;i++)
if(level[i]==x)
sum++;
cout<<sum;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}