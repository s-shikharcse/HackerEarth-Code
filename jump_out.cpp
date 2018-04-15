#include<iostream>
using namespace std;

int main(){
	int n,min_len=0;
	bool flag = true;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(((a[i]+i+1)>n)and(flag==true)){
			min_len = i+1;
			flag = false;
		}	
    }
    cout<<min_len<<endl;
}