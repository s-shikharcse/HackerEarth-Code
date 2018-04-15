#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,set[10],len,match = 0;
	string x;

	cin>>x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>set[i];
		match ^= set[i];
	}

	len = x.length();
	int count = 0,check = 0;


	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){
			check = 0;
			for(int k=i;k<=j;k++){
				 check ^= int(x[i]-'0');			
			}
			if((check^match) == 0)
				count++;	
		}
	}
	cout<<count<<"\n";
}
