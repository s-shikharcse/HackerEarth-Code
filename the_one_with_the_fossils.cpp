#include<iostream>
#define MOD 1000000007
typedef long long ll;
using namespace std;

ll power(ll a, ll b){
	ll x=1,y=a;
	while(b>0){
		if(b%2==1)
			x = (x*y)%MOD;
		y = (y*y)%MOD;
		b = b/2;
	}
return x%MOD;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		ll ans = power(x,y)%MOD;
		cout<<ans<<"\n";
	}
}