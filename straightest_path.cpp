#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n,m,start_x,start_y,end_x,end_y;
	char grid[1005][1005];
	cin>>n>>m;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
			if(grid[i][j]=='V'){
				start_x = i;
				start_y = j;
			}
			if(grid[i][j]=='H'){
				end_x = i;
				end_y = j;
			}
		}
	}

	

}