#include<iostream>
#define MAX 1000050
typedef long long int lli;

using namespace std;
int a[MAX];
struct Node{
	lli value;
	lli count; 	
}tree[4*MAX];

void build(lli start,lli end,lli node){
	if(start>end)return;

	if(start==end){
		tree[node].value = a[start];
		tree[node].count = 0;
	}
	else{
		lli mid = (start+end)/2;
		build(start,mid,node*2);
		build(mid+1,end,node*2+1);
		tree[node].value = tree[node*2].value ^ tree[node*2+1].value;
	}
}
Node query(lli left, lli right, lli start, lli end, lli node){
	//static int count = 0;
	//if(start>right or end<left)
	//	return 0;
    if(start>=left and end<=right)
		return tree[node];
	else{
		lli mid = (start+end)/2;
		Node p1 = query(left,right,start,mid,node*2);
		Node p2 = query(left,right,mid+1,end,node*2+1);
        Node p3;
        p3.value = p1.value ^ p2.value;
        p3.count = p1.count + p2.count;
        if(p3.value>=left and p3.value<=right)
        	p3.count++;
        return p3;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		lli n,Q,l,r;
		cin>>n;
		for(lli i=0;i<n;i++) cin>>a[i];
		build(0,n-1,1);
		cin>>Q;
		for(lli i=0;i<Q;i++){
			cin>>l>>r;
			Node qry = query(l-1,r-1,0,n-1,1);
			cout<<qry.count<<endl;
		}
	}
}