#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int sum = 0,avg; 
	int n,m;

	cin>>n>>m;
	int a[n];
	bool saved[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum += a[i];
		saved[i] = 0;
	}
	saved[n] = 0; 
	//sort(a,a+n,greater<int>());
	avg = round(sum/(n+0.0));
	cout<<avg<<"\n";
	int nob = m/avg;

	for(int i=0;i<nob;i++){
		vector<int>index;
		int left_space = avg, count = 0;
		
		for(int j=0;j<n and left_space>0;j++){
			if((a[j]<=left_space)and(!saved[j])){
				left_space -= a[j];
				index.push_back(j+1);
				saved[j] = 1;
				count++;
			}
		}
		cout<<count<<" ";
		for(int j=0;j<count;j++){
			cout<<index[j]<<" ";
		}
		cout<<endl;	
	}
}