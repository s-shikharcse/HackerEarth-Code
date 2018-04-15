#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
	long long int samKey, lockKey, n;
	cin>>samKey>>lockKey;
	cin>>n;
	long long int *a = new long long int[n];
	long long int *ans = new long long int[100005];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	fill(ans,ans+100005,-1);

	queue<long long int>q;
	q.push(samKey);
	ans[samKey] = 0;

	while(!q.empty()){
		long long int p = q.front();
		q.pop();
		if(p==lockKey) break;
		for(long long int i=0;i<n;i++){
			long long int compute = (a[i]*p)%100000;
			if(ans[compute%100000]==-1){
				ans[compute%100000] = ans[p] + 1;
				q.push(compute);
			} 
		}
	}
cout<<ans[lockKey]<<endl;
}