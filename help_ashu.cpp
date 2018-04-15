#include<iostream>
typedef long long int lli;
using namespace std;

lli seg_tree[400100]={0}; 
lli a[100100]={0};
void build(lli s,lli e,lli node_num){
	if(s==e){
    	if(a[s]%2==0) seg_tree[node_num]=1; 
	}
	else{
		lli m=(s+e)/2;
		build(s,m,node_num*2);
		build(m+1,e,node_num*2+1);
		seg_tree[node_num] = seg_tree[node_num*2]+seg_tree[node_num*2+1];
	}
}

lli query2(lli l,lli r,lli s,lli e,lli node_num){
	if(s>r || e<l) return 0;
	else if(s>=l && e<=r)
		return seg_tree[node_num];
	else{
		lli m = (s+e)/2;
		return (query2(l,r,s,m,node_num*2) + query2(l,r,m+1,e,node_num*2+1));
	}
}

void point_update(lli p,lli newval,lli s,lli e,lli node_num){
	if(s==e) {
		seg_tree[node_num]=newval%2;
        a[p] = newval;
    }
    else{
    lli m = (s+e)/2;
    if(s<=p and p<=m)
    	point_update(p,newval,s,m,node_num*2);
    else
    	point_update(p,newval,m+1,e,node_num*2+1);
    seg_tree[node_num]=seg_tree[node_num*2]+seg_tree[node_num*2+1]; 
    }
}

int main(){
	lli n,q,l,r,query;
	cin>>n;
	//lli *a = new lli[n+50];
	for(lli i=0;i<n;i++) cin>>a[i];
    build(0,n-1,1); 
	cin>>q;
	for(lli i=0;i<q;i++){
		cin>>query>>l>>r;
		if(query==0){
			point_update(l-1,r,0,n-1,1);
		}
		else if(query==1){
			cout<<(l-r+1)-query2(l-1,r-1,0,n-1,1)<<endl;
		}
		else if(query==2){
            cout<<query2(l-1,r-1,0,n-1,1)<<endl;
		}

	} 
}
