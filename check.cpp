#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v(10) ;
	for(int i=0;i<10;i++)
	{
		v.push_back(i+1);
	}
	vector<int> :: iterator iter ;
	iter = find(v.begin(),v.end(),2);
	cout<<*iter<<endl;
}