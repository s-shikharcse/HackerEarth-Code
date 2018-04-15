#include<iostream>
#include<algorithm>
#define MOD 1000000007
#define MAX 100000+5
typedef long long int ll;
using namespace std;
const int MAXV = 5e5;
ll BIT[MAX]={0},n,phi[MAXV+5],p[MAXV+5];

void compute_phi() {
    for(int i = 1; i <= MAXV; i++) phi[i] = i;
    for(int i = 2; i <= MAXV; i++)
        if (phi[i] == i) { // prime number
            for(int j = i; j <= MAXV; j += i) {
                phi[j] -= phi[j] / i;
                phi[j] = phi[j]%MOD;
            }
        }
}

void compute_pillai() {
    for(int i = 1; i <= MAXV; i++)
        for(int j = i; j <= MAXV; j += i) {
            p[j] += i * phi[j / i];
            p[j] = p[j]%MOD;
        }
}

void update(ll idx, ll new_val){
	for(;idx<=n;idx+=idx & -idx)
		BIT[idx]+=new_val;
}

ll query(ll x){
	ll sum=0;
	for(;x>0;x-=x&-x)
		sum = (sum+BIT[x])%MOD;
	return sum%MOD;
}

ll gcd(ll a,ll b){
	if(b==0)
		return a;
	else gcd (b,a%b);
}

int main(){
	compute_phi();
	compute_pillai();
	ll x,y,Q;
	char qry;
	cin>>n;
	int *a = new int[n+5];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		update(i,p[a[i]]);
	}
	/*for(ll i=1;i<=n;i++){
		for(ll j=1;j<=a[i];j++)
			b[i] += gcd(j,a[i]);
		update(i,b[i]);	 
	}*/
	cin>>Q;
	while(Q--){
		cin>>qry>>x>>y;
		if(qry=='C'){
			cout<<query(y) - query(x-1)<<endl;
		}
		else{
			/*ll prev = b[x];
			ll k = x;
			b[x] = 0;
			for(ll j=1;j<=y;j++){
				b[x] += gcd(j,y);
			}
			for(;k<=n;k+=k&-k)
				BIT[k] -= prev;*/
			update(x,-p[a[x]]+p[y]);
			a[x]=y;
		}
	}	
}