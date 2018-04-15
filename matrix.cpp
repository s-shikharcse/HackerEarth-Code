#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int x[300000+5],y[300000+5];
	map<int,int> m;
	int n,q,sx,sy,fx,fy;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
		m[x[i]] = y[i];
	}

	sort(x,x+n);

	for(int i=0;i<q;i++){
		int max=0;
		unsigned long long int timee = 0;

		cin>>sx>>sy>>fx>>fy;
		
		if(sx==fx and sy==fy){
			cout<<0<<"\n";
			continue;
		}

		timee += abs(fx-sx);

		int lo = lower_bound(x,x+n,sx) - x;
		int hi = upper_bound(x,x+n,fx) - x;
		for(int j=lo;j<=hi;j++){
			if(max < m[x[j]])
				max = m[x[j]];
		}

		/*for(int i=0;i<n;i++){
			if(x[i]>sx and x[i]<fx)
				if(max<y[i])
					max = y[i];	
		}*/

		max += 1;
	    timee = timee + abs(max-sy) + abs(max-fy);
	cout<<timee<<"\n";
	}

}