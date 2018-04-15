#include <bits/stdc++.h>
#define N 300005
using namespace std;

typedef long long ll;

int xseg_tree[4*N];//type 1
int pseg_tree[4*N];///type 2
int x[N],p[N];

void build(int s,int e,int node_num, int type){
	if(s==e) { //leaf node
		if(type==1)
			xseg_tree[node_num]=x[s];
		else if(type==2)
			pseg_tree[node_num]=p[s];
	return;
	}

	int m = (s+e)/2;
	build(s,m,node_num*2,type);
	build(m+1,e,node_num*2+1,type);

	if(type==1)
		xseg_tree[node_num]= max(xseg_tree[node_num*2],
			xseg_tree[node_num*2+1]);
	else if(type==2)
		pseg_tree[node_num] = min(pseg_tree[node_num*2],
			pseg_tree[node_num*2+1]);
}

int query(int l,int r,int s,int e,int node_num,int type){
	if(s>r || e<l){
		if(type==1)
			return INT_MIN;
		else if(type==2)
			return INT_MAX;	 
	}
	else if(s>=l and e<=r){
		if (type==1)
			return xseg_tree[node_num];
		else if(type==2)
			return pseg_tree[node_num];
	}
	else{
		int m = (s+e)/2;
		if(type==1){
			return max(xseg_tree[node_num*2],
				xseg_tree[node_num*2+1]);
		}
		else if(type==2){
			return min(pseg_tree[node_num*2],
				pseg_tree[node_num*2+1]);
		} 
	}
}

void point_update(int p, int new_val,int s,int e,int node_num,int type){
	if(s==e){
		if(type==1)
			xseg_tree[node_num] = new_val;
		else if(type==2)
			pseg_tree[node_num] = new_val;
		return;
	}
	
	int m = (s+e)/2;
	
	if(p<=m)
		point_update(p,new_val,s,m,node_num*2,type);
	else
		point_update(p,new_val,m+1,e,node_num*2+1,type);

	if(type==1){
		xseg_tree[node_num]=max(xseg_tree[node_num*2],
			xseg_tree[node_num*2+1]);
	}
	else if(type==2){
		pseg_tree[node_num]=min(pseg_tree[node_num*2],
			pseg_tree[node_num*2+1]);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,q,type,pos,new_val,a,b;
	cin>>n>>q;

	for(int i=0;i<n;i++)
		cin>>x[i];
	for(int i=0;i<n;i++)
		cin>>p[i];

	while(q--){
		cin>>type;
		if(type==1){
			cin>>pos>>new_val;
			point_update(pos-1,new_val,1,n,1,1);
		}
		else if(type==2){
			cin>>pos>>new_val;
			point_update(pos-1,new_val,1,n,1,2);
		}
		else{
			cin>>a>>b;
			int temp1 = query(a-1,b-1,1,n,1,1);
			int temp2 = query(a-1,b-1,1,n,1,2);
			int ans1 = INT_MAX;
			for(int i=a-1;i<=b-1;i++){
				ans1 = min(temp2,i-a);
			}
			cout<<temp1+ans1<<"\n";
		}
	}

}