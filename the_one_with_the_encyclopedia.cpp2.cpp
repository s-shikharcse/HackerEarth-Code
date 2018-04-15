#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t,n,value;
	ll input;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<ll,int> >levels; 
		ll array[n];
		for(int i=0;i<n;i++){
			cin>>input;
			levels.push_back(make_pair(input,i+1));
		}
		sort(levels.begin(),levels.end());
		for(int i=0;i<n;i++) 
			array[i]=levels[i].first;
		cin>>value;	
		if(value<=array[0])
			cout<<-1<<"\n";
		else{
			int index = lower_bound(array,array+n,value) - array;
			cout<<levels[index].second<<"\n";	
		}
	}
}