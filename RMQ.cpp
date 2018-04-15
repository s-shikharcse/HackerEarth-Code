#include<iostream>
#include<algorithm>
using namespace std;

int seg_tree[400000],a[100000];

void build(int s,int e,int node_num){
	if(s==e){
		seg_tree[node_num] = a[s];
	    return;
	}
	int m = (s+e)/2;
	build(s,m,node_num*2);
	build(m+1,e,node_num*2+1);
	//seg_tree[node_num] = seg_tree[node_num*2]+seg_tree[node_num*2+1];
	//seg_tree[node_num] = min_element(seg_tree[node_num*2],seg_tree[node_num*2+1]);
	if(seg_tree[node_num*2]<=seg_tree[node_num*2+1])
	seg_tree[node_num] = seg_tree[node_num*2];
	else
	seg_tree[node_num] = seg_tree[node_num*2+1];
	return;	
}

void point_update(int p,int new_val,int s,int e,int node_num){
	if(s==e) {
	    seg_tree[node_num] = new_val;
        return;
	}
    int m = (s+e)/2;
    if(p<=m)
    	point_update(p,new_val,s,m,node_num*2);
    else
    	point_update(p,new_val,m+1,e,node_num*2+1);
    //seg_tree[node_num] = min_element(seg_tree[node_num*2],seg_tree[node_num*2+1]);
    if(seg_tree[node_num*2]<=seg_tree[node_num*2+1])
    seg_tree[node_num] = seg_tree[node_num*2];
    else
    seg_tree[node_num] = seg_tree[node_num*2+1];
}

int query(int l,int r,int s,int e,int node_num){
	if(s>r or e<l) return 100005;
	else if(s>=l and e<=r) return seg_tree[node_num];
	else{
		int m = (s+e)/2;
	    int p1 = query(l,r,s,m,node_num*2);
	    int p2 = query(l,r,m+1,e,node_num*2+1);
	//return min_element(p1,p2);
	if(p1<=p2) return p1;
	else return p2;
	}
}

int main(){
	int n,q,l,r;
	char qry;
	cin>>n>>q;
	for(int i=0;i<n;i++) cin>>a[i];
	build(0,n-1,1);
	while(q--){
		cin>>qry>>l>>r;
		if(qry=='q'){
			cout<<query(l-1,r-1,0,n-1,1)<<endl;
		}
		else{
			point_update(l-1,r,0,n-1,1);
		}
	}
	return 0;	
}