#include<bits/stdc++.h>
using namespace std;

int g[31][31] = {{0}};
stack<int> s;
int level[31] = {0};
bool visited[31] ;
int n,start,end;

void dfs(int start){
	visited[start] = true;
	level[start] = 1;
	s.push(start);
	while(!s.empty()){
		int element = s.top();
		s.pop();
		for(int i=0;i<n;i++){
			if(!visited[i] and g[element][i]){
				level[i] = level[element]+1;
				visited[i] = 1;
				s.push(i);
			}
		}
	}
cout<<level[end]<<"\n";		
}

int main(){
	char ch;
	cin>>n;
	int b = 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>ch;
			if(ch=='S' or ch=='E' or ch=='P')
				g[i][j] = 1;
			
			if(ch=='S')
				start = b;
			if(ch=='E')
				end = b;	 
		b++;
		}
	}
	dfs(start);
}