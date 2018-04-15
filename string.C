#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;
int main(){
     int t;
     cin>>t;
    fflush(stdin);
    char c[2][100000];
   for(int i=0;i<2;i++)
   {
     cin.getline(c[i],100000);
    }
    cout<<c[0];
    cout<<c[1];
    return 0;
}
