#include<iostream>
#include<algorithm>
#define MAX 100005
#define inf -100000000000000
typedef long long int lli;
using namespace std;

lli a[MAX];
struct Node{
	lli even;
	lli odd;
}tree[4*MAX];

void build(lli start,lli end,lli node){
	if(start==end){
	 	tree[node].even = tree[node].odd = inf;
	 	if(a[start]%2==0)
	 		tree[node].even = a[start];
	 	else
	 		tree[node].odd = a[start];
		return;
	}
	else{
		lli mid = (start+end)/2;
		build(start,mid,node*2);
		build(mid+1,end,node*2+1);
		tree[node].even = max(tree[node*2].even,tree[node*2+1].even);   
	    tree[node].odd = max(tree[node*2].odd,tree[node*2+1].odd);
	}
}

void point_update(lli p,lli val,lli start,lli end,lli node){
	if(start == end){
		tree[node].even = tree[node].odd = inf;
		if(val%2==0)
			tree[node].even = val;
		else
			tree[node].odd = val;
 		return;
	}
	lli mid = (start+end)/2;
	if(p<=mid)	
		point_update(p,val,start,mid,node*2);
	else
		point_update(p,val,mid+1,end,node*2+1);
	tree[node].even = max(tree[node*2].even,tree[node*2+1].even);
	tree[node].odd = max(tree[node*2].odd,tree[node*2+1].odd);	
} 
		
Node query(lli left,lli right,lli start,lli end,lli node){
	//if(start>right or end<left)
   //		return 0;
	if(start>=left and end<=right) 
		return tree[node];
	else {
		lli mid = (start+end)/2;
		Node p1 = query(left,right,start,mid,node*2);
		Node p2 = query(left,right,mid+1,end,node*2+1);
        Node p3;
        p3.even = max(p1.even,p2.even);
        p3.odd = max(p1.odd,p2.odd);
	return p3;
	}
}

int main(){
	lli n,q,a,l,r,j,x;
	cin>>n>>q;
	
	for(lli i=0;i<n;i++) cin>>a[i];
    build(0,n-1,1);
    
    for(int i=0;i<q;i++){
    	cin>>a;
    	if(a!=1){	
    		cin>>l>>r;
    		if(a==2){
    			Node qry = query(l-1,r-1,0,n-1,1);
    			if(qry.even!=inf)
    				cout<<qry.even<<endl;
    			else 
    				cout<<"DNE"<<endl;
    		}
    		else{
    			Node qry = query(l-1,r-1,0,n-1,1);
    			if(qry.odd!=inf)
    				cout<<qry.odd<<endl;
    			else
    				cout<<"DNE"<<endl;
    		}
    	}
    	else{
    		cin>>j>>x;
    		point_update(j-1,x,0,n-1,1);	
    	} 
    }
}