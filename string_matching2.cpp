#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,len,set[10],hash_x[10],hash_set[10];
	string x;

	cin>>x;
	cin>>n;

	fill(hash_set,hash_set+10,0);
	fill(hash_x,hash_x+10,0);
	for(int i=0;i<n;i++){
		cin>>set[i];
		hash_set[set[i]]++;
	}

	len = x.length();
	int count = 0;

	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){

			bool flag = true;
			for(int k=i;k<=j;k++){
				int digit = x[k] - '0';
				if(hash_set[digit]==0){
					flag = false;
					break;
				}
			}
			if(flag == true)
				count++;
		}
	}
	cout<<count<<"\n";
}
