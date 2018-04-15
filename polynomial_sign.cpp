#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	ll a[300000+5];
	bool flag = false;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	if(a[n]>0){
		if(n%2==0)
			cout<<1<<" "<<1<<"\n";
		else
			cout<<1<<" "<<-1<<"\n";
	}
	else if(a[n]<0){
		if(n%2==0)
			cout<<-1<<" "<<-1<<"\n";
		else
			cout<<-1<<" "<<1<<"\n";
	}
	else{
		while(n>=0 and a[n]==0){
			n--;
		}
		if(n<0){
			cout<<0<<" "<<0<<"\n";
		}
		else{
				if(a[n]>0){
					if(n%2==0)
						cout<<1<<" "<<1<<"\n";
					else
						cout<<1<<" "<<-1<<"\n";
				}
				else if(a[n]<0){
					if(n%2==0)
						cout<<-1<<" "<<-1<<"\n";
					else
						cout<<-1<<" "<<1<<"\n";
				}
		}
	}
}