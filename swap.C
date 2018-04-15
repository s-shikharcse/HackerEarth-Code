#include<iostream>
using namespace std;

int swap(int& , int&);
int main(){
int a=5,b=10;
swap(a,b);
cout<<a<<"\t"<<b<<"\n";
}

int swap(int & c,int & d){
int temp;

temp=c;
c=d;
d=temp;}

