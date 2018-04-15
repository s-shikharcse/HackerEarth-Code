#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

priority_queue<ll> lower;//max heap
priority_queue<ll,vector<int>,greater<int> > higher;//min heap

void add_number(ll num){
	if(!lower.empty() and num<lower.top()){
		lower.push(num);
		if(lower.size() - higher.size() == 1){
			higher.push(lower.top());
			lower.pop();
		}
	}
	else{
		higher.push(num);
		if(higher.size() - lower.size() == 2){
			lower.push(higher.top());
			higher.pop();
		}
	}
}

ll get_median(){
	if(higher.size()==lower.size())
		return ((higher.top()+lower.top())/2.0);
	else
		return higher.top(); 
} 

int main(){
	ll n,x;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>x;
		add_number(x);
		cout<<get_median()<<"\n";
	}
return 0;
}