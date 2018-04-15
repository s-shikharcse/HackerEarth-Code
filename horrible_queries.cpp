#include<iostream>
using namespace std;

int main(){
	int t,n,c,p,q,v;
	cin>>t;
	while(t--){
		cin>>n>>c;
		bool first;
		int *array = new int[n];
		fill(a,a+n,0);

		for(int i=0;i<c;i++){
			cin>>first;
			if(!first){
				cin>>p>>q>>v;
				build()

			}

		}

	}
}

int seg_tree[4*n];
void build(int s, int e, int node_num){
	if(s==e){
		seg_tree[node_num] = array[s];
		return;
	}
	int m = (s+e)/2;
	build(s,m,node_num*2);
	build(m+1,e,node_num*2+1);
	seg_tree[node_num]=seg_tree[node_num*2]+seg_tree[node_num*2+1];
	return;
}

int query(int l, int r,int s,int e,int node_num){
	if(s>r || e<l)
		return 0;
	else if(s>=l && e<=r)
		return seg_tree[node_num];
	else{
		int m = (s+e)/2;
		return query(l,r,s,m,node_num*2) + query(l,r,m+1,e,node_num*2+1);
	}
}



lazy[4*n] = {0}; 
void lazy_update(int s,int e,int node_num){
	seg_tree[node_num] = (e-s+1) * lazy[node_num];
	if(e>s)
		lazy[node_num*2]=lazy[node_num*2+1]=lazy[node_num];
    lazy[node_num]=0;
}

void set_lazy(int s, int e,int new_val,int node_num){
	if(e>S){
		int m = (s+e)/2;
		lazy[node_num*2]=lazy[node_num*2+1]=new_val;
	}
}

void range_update(int l,int r,int new_val,int s,int e,int node_num){
	if(lazy[node_num]>0)
		lazy_update(s,e,node_num);
	if(s>r || e<l)
		return;
	else if(s>=l && e<=r)
		seg_tree[node_num] = (e-s+1)*new_val;
		set_lazy(s,e,new_val,node_num);
	else{
		int m = (s+e)/2;
		range_update(l,r,new_val,s,m,node_num*2);
		range_update(l,r,new_val,m+1,e,node_num*2+1);
		seg_tree[node_num] = seg_tree[node_num*2] + seg_tree[node_num*2+1];

	}	
}
