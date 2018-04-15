#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> input;
	string s;
	int count=0;
	while(cin>>s){
		input.push_back(s);
		cin.ignore('\n');
		count++;
	}
	for(int i=(count/2);i<count;i++){
		cout<<input[i]<<"\n";
	}
	for(int i=0;i<(count/2);i++){
		cout<<input[i]<<"\n";
	}
}