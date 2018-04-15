#include<bits/stdc++.h>
using namespace std;

const int MAX = 5e5+50;

int main(){
	int t,n,array[MAX];
	double sum ;
	cin>>t;
	while(t--){
		cin>>n;
		sum = 0;
		for(int i=0;i<n;i++) {
			cin>>array[i];
			sum += array[i];
		}
		cout.setf(ios::showpoint);
		cout.precision(10);
		cout<<sum/n;
	}	
}