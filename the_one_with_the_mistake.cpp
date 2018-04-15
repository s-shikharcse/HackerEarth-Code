#include<bits/stdc++.h>
using namespace std;

bool compare(const vector<pair<int,int> >&A,const vector<pair<int,int> >&b){
	if(A.first!=B.first)
		return A.first<B.first;
	else
		return A.second<B.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,n,d,value,input,index;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<int,int> >levels;
		for(int i=0;i<n;i++){
			cin>>input;
			levels.push_back(make_pair(input,i+1));
		}
		sort(levels.begin(),levels.end(),compare);
		int array[n];
		for(int i=0;i<n;i++){
			array[i] = levels[i].first;
		}

		cin>>d;
		long long sum = 0;
		while(d--){
			cin>>value;
			index = upper_bound(array,array+n,value) - array;
			if(value>array[0]){
				sum += levels[index].second;
			}
			else{
				sum += -1;
			}
		}
	cout<<sum<<"\n";	
	}
}