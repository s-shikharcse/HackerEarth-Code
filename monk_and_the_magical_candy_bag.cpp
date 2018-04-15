#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll t,n,k,input,eaten,x,s;
	cin>>t;
	while(t--){
		multiset<ll> bags;
		eaten=0;
		cin>>n>>k;
		for(ll i=0;i<n;i++){
			cin>>input;
			bags.insert(input);
		}
		multiset<ll>::iterator it;
		for(ll i=0;i<k;i++){
                x=(*bags.rbegin())/2;
                s+=*bags.rbegin();
                it=bags.end();
                it--;
                bags.erase(it);
                bags.insert(x);
		}
	cout<<eaten<<endl;	
	}
return 0;	
}