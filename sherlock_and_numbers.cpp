#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t,n,k,p;
	cin>>t;
	while(t--){
		cin>>n>>k>>p;
		int remove[k],shift=0;
		for(int i=0;i<k;i++){
			cin>>remove[i];
		}
		sort(remove,remove+k);
		for(int i=0;i<k;i++){
			if(remove[i]<=p+shift)
				shift++;
			else
				break;
		}
		if(n-k >= p)
			cout<<shift+p<<"\n";
		else
			cout<<-1<<"\n";	 
	}
}