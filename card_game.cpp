#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,m,a[300000+5],b[300000+5];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}

	int maxx = max_element(b,b+m) - b;
	int to_win = b[maxx]+1;
	unsigned long long need = 0;
	for(int i=0;i<n;i++){
		if(a[i]<to_win)
			need += to_win - a[i];
		//else if(a[i]==to_win)
		//	need +=1;
	}
	cout<<need<<"\n";
}