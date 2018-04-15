#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,string> >record;
	int n,marks;
	string name;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>marks;
		record.push_back(make_pair(marks,name));
	}
	sort(record.rbegin(),record.rend());
	for(int i=0;i<n;i++){
		cout<<record[i].second<<" ";
		cout<<record[i].first<<"\n";
	}  
}