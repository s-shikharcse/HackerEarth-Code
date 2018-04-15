#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin>>n>>m;
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	int temp[m],temp2[m];
	
	for(int j=0;j<m;j++)
		temp[j] = array[0][j];
	for(int j=0;j<m;j++)
		temp2[j] = array[1][j];
	sort(temp,temp+m);
	sort(temp2,temp2+m);

	int abs_diff = 0,minn = INT_MAX,lwr = 0;
	for(int i=0;i<m;i++){
		int calc = *lower_bound(temp2,temp2+m,temp[i]);
		int ans = abs(temp[i]- calc);
		if(minn>ans){
			minn = ans;
			lwr = calc;
		}
	}
	abs_diff += minn;
	for(int i=2;i<n;i++){
		for(int j =0;j<m;j++)
			temp2[j] = array[i][j];
		sort(temp2,temp2+m);
		int calc = *lower_bound(temp2,temp2+m,lwr);
		abs_diff += abs(lwr-calc);
	}
	cout<<abs_diff<<"\n";
}