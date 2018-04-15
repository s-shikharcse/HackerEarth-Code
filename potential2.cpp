#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int x[300005],p[300005],pos,a,b,n,q,type,new_val;
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>x[i];
	for(int i=0;i<n;i++)
		cin>>p[i];

	while(q--){
		cin>>type;
		if(type==1){
			cin>>pos>>new_val;
			x[pos-1] = new_val;
		}
		else if(type==2){
			cin>>pos>>new_val;
			p[pos-1] = new_val;
		}
		else{
			cin>>a>>b;
			int ans = INT_MIN;
			multiset<int>s;
			for(int i=a;i<=b;i++){
				/*int temp = x[i-1] + min(p[i-1],i-a);
				if(temp>=ans)
					ans = temp;*/
				s.insert(x[i-1] + min(p[i-1],i-a));
			}
			cout<<s.rbegin()<<"\n";
		}
	}
}