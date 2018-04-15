#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


/*bool compare(const pair<int,int>&A,const pair<int,int>&B){
	if(A.first!=B.first)
		return A.first < B.first;
	else
		return A.second > B.second;
}*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t,n;
	cin>>t;
	ll input;
	while(t--){
		int value;
		cin>>n;
		vector<pair<ll,int> >levels; 
		ll array[n];
		
		for(int i=0;i<n;i++){
			cin>>input;
			levels.push_back(make_pair(input,i+1));
		}
		sort(levels.begin(),levels.end());
		for(int i=0;i<n;i++){
			array[i]=levels[i].first;
			cout<<array[i]<<" "<<"index "<<levels[i].second<<endl;
		} 
		cin>>value;
		//cout<<value;
		//cout<<"HELLO";
		if(value>array[0]){
			int index = lower_bound(array,array+n,value) - array - 1;
			cout<<levels[index].second<<"\n";
		}
		else
			cout<<-1<<"\n";	
	}
}