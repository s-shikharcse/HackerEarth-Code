#include<iostream>
using namespace std;

void HIT(int x,int *a,int n){
	for(int i=0;i<n;i++){
		if(a[i]>x)
			a[i]=a[i]-1;
	}
}

int main(){
	int n,m,x;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++){
    	cin>>x;
    	HIT(x,a,n);
    }
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;
}
