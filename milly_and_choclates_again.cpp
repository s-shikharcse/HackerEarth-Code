#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+50;
int bags[MAX],query[MAX],n,q;
unsigned long long int prefix_sum[MAX] = {0};

/*bool check(int mid, int target){
	if(prefix_sum[mid] > target)
		return true;
	else
		return false;
}*/

int binary_search(int target){
	int low = 1, high = n, mid;
	while(low<high){
		mid = low + (high-low)>>1;
		if(target > prefix_sum[mid])
			low = mid+1;
		else 
			high = mid-1;
	}
return low;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>bags[i];
    	prefix_sum[i] += bags[i];
    }
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>query[i];
		int ans = binary_search(query[i]);
	cout<<ans<<"\n";
	}
}