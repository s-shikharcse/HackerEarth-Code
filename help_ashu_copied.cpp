#include<bits/stdc++.h>
using namespace std;
#define mx1 1000050
#define mx2 1000050
int segTree[mx1]={0},a[mx2]={0},n;
int constructUtl(int ss,int se,int node){
if(ss==se){
if(a[ss]%2) segTree[node]=1;
}
else{
constructUtl(ss,(ss+se)/2,2*node+1);
constructUtl((ss+se)/2 +1,se,2*node+2);
segTree[node]=segTree[2*node+1]+segTree[2*node+2];
}
}
int construct(){
constructUtl(0,n-1,0);
}
int getOddUtl(int qs,int qe,int ss,int se,int node){
if(ss>se||ss>qe||se<qs) return 0;
if(ss>=qs&&se<=qe) return segTree[node];
else return getOddUtl(qs,qe,ss,(ss+se)/2,2*node+1) + getOddUtl(qs,qe,(ss+se)/2 +1 ,se,2*node+2);
}
int getOdd(int qs,int qe){
return getOddUtl(qs,qe,0,n-1,0);
}
int updateUtl(int qs,int qe,int ss,int se,int k,int node){
if(qs>qe||qs>se||qe<ss) return 0;
if(ss==se) segTree[node]=k%2;
else{
if(qs<=(ss+se)/2) updateUtl(qs,qe,ss,(ss+se)/2,k,2*node+1);
else updateUtl(qs,qe,(ss+se)/2 +1,se,k,2*node+2);
segTree[node]=segTree[2*node+1]+segTree[2*node+2];
}
}
int update(int qs,int qe){
updateUtl(qs,qs,0,n-1,qe,0);
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++) scanf("%d",&a[i]);
construct();
int query;
scanf("%d",&query);
while(query--){
int x,qs,qe;
cin >> x >> qs >> qe;
if(x==0) update(qs-1,qe);
else if(x==1) cout << qe-qs+1-getOdd(qs-1,qe-1) << endl;
else cout << getOdd(qs-1,qe-1) << endl;
}
}