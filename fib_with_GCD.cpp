#include<iostream>
#define MAX 100000
#define MOD 1000000007
typedef long long int lli;
using namespace std;

lli a[MAX+50], tree[4*MAX+50];// fib[MAX+50]={0};

lli gcd(lli A, lli B){
	if(B==0)
		return A%MOD;
	else
		gcd(B,A%B);	 
}

/*lli F(lli A){
	if(A==1 or A==2) 
		return 1;
	else{
		 fib[] = F(A-1) + F(A-2);
	return f;
	}
}*/

lli fib(lli n){
    n=n-2;
    lli a=0,b=1,c=1,d=1,a1=0,b1=1,c1=1,d1=1,a2,b2,c2,d2;
    while(n>0){
        if(n%2==1){
            n--;
            a2=(a*a1+b*c1)%(MOD);
            b2=(a*b1+b*d1)%(MOD);
            c2=(c*a1+d*c1)%(MOD);
            d2=(c*b1+d*d1)%(MOD);
            a=a2;
            b=b2;
            c=c2;
            d=d2;
        }
        else{
            n/=2;
            a2=(a1*a1+b1*c1)%(MOD);
            b2=(a1*b1+b1*d1)%(MOD);
            c2=(c1*a1+d1*c1)%(MOD);
            d2=(c1*b1+d1*d1)%(MOD);
            a1=a2;
            b1=b2;
            c1=c2;
            d1=d2;
        }
    }
    return d%(MOD);
}

void build(lli start,lli end,lli node){
	if(start==end){
		tree[node] = a[start];
	}
	else{
		lli mid = (start+end)/2;
		build(start,mid,node*2);
		build(mid+1,end,node*2+1);
		tree[node] = gcd(tree[node*2],tree[node*2+1])%MOD;
	}
}
lli query(lli left, lli right, lli start, lli end, lli node){
	if(start>right or end<left)
		return 0;
    if(start>=left and end<=right)
		return tree[node];
	else{
		lli mid = (start+end)/2;
		lli p1 = query(left,right,start,mid,node*2);
		lli p2 = query(left,right,mid+1,end,node*2+1);
        lli p3 = gcd(p1,p2)%MOD;
        return p3;
	}
}

int main(){
	lli n,q,l,r;
	cin>>n>>q;
	//int *A = new int[n];
	/*fib[1]=fib[2]=1;
	for(lli i=3;i<=MAX+10;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}*/
	for(lli i=0;i<n;i++) {
		cin>>a[i];
    	//a[i] = F(A[i]); 
    	//a[i] = fib[A[i]];
    }
    build(0,n-1,1);
    for(lli i=0;i<q;i++){
    	cin>>l>>r;
    	lli ans = query(l-1,r-1,0,n-1,1);
    	cout<<fib(ans)<<endl;
    }
}