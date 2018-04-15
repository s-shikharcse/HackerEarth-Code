# include<bits/stdc++.h>
# define MOD 1000000007
using namespace std;

unsigned long long fact[1000010], a[1000010];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	unsigned long long int n,m,denom=1,num=1;
	fact[0] = 1;
	for(unsigned long long int i=1;i<1000010;i++){
		fact[i] = (fact[i-1]*i)%MOD;
	}

	cin>>n>>m;
	for(unsigned long long int i=0;i<m;i++){
		cin>>a[i];
		denom = (denom*fact[a[i]])%MOD;
	}
	num = fact[n]%MOD;
	cout<<(num/denom)%MOD<<endl;
}