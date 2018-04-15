#include<bits/stdc++.h>
#define N 300005
using namespace std;

int seg_tree[N],x[N],y[N];

void build(int s,int e,int node_num){
	if(s==e){
		seg_tree[node_num] = y[s];
		return; 
	}
	int m = (s+e)/2;
	build(s,m,node_num*2);
	build(m+1,e,node_num*2+1);

	seg_tree[node_num]=max(seg_tree[node_num*2],
		seg_tree[node_num*2+1]);
 return;
}

int query(int l,int r,int s,int e,int node_num){
	if(s>r || e<l)
		return INT_MIN;
	if(s>=l and e<=r)
		return seg_tree[node_num];

	int m = (s+e)/2;
	return max(query(l,r,s,m,node_num*2),
		query(l,r,m+1,e,node_num*2+1));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,q,sx,sy,fx,fy;
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	
	build(0,n-1,1);

	long long timee = 0;
	timee += abs(fx-sx);

	for(int i=0;i<q;i++){
		cin>>sx>>sy>>fx>>fy;
		int ans = query(sy,fy,0,n-1,1);
		ans++;
		timee = timee + abs(ans-sy) + abs(ans-fy);
		cout<<timee<<"\n"; 
	}
}