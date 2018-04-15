#include<iostream>
#include<algorithm>
#define MAX 100000
typedef long long int lli;
using namespace std;

lli a[MAX+50];
struct Node{
	lli Left;
	lli Right;
	lli value;
}tree[4*MAX+50];

void build(lli start,lli end,lli node){
	if(start==end){
		tree[node].Left=tree[node].Right=a[start];
		tree[node].value = 1;
	}
	else{
		lli mid = (start+end)/2;
		build(start,mid,node*2);
		build(mid+1,end,node*2+1);
		tree[node].Left = tree[node*2].Left;
		tree[node].Right = tree[node*2+1].Right;
		/*tree[node].value += 0;
		if(tree[node*2].Left>=tree[node*2+1].Right)
			tree[node].value += tree[node*2].value+tree[node*2+1].value;*/
	}
}

Node query(lli left,lli right,lli start,lli end,lli node){
	//if(start>right or end<left) return 0;
	if(start>=left and end<=right) return tree[node];
	else{
		lli mid = (start+end)/2;
		Node p1 = query(left,right,start,mid,node*2);
		Node p2 = query(left,right,mid+1,end,node*2+1);
		Node p3;
		p3.Left = p1.Left;
		p3.Right = p2.Right;
		p3.value += 0;
		if(p1.Left>=p2.Right)
			p3.value += p1.value+p2.value;
	return p3;
	}
}

int main(){
	lli t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(lli i=0;i<n;i++) cin>>a[i];
		build(0,n-1,1);
		lli maxx = 0;
		for(lli i=1;i<4*MAX+50;i++){
			if(tree[i].value>=maxx)
				maxx = tree[i].value; 
		}
		cout<<maxx<<endl;
	}
}