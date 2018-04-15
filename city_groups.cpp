#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,k,s,xx;
    cin>>n>>k;
    vector<int>v[k];
    
    for(int i=0;i<k;i++)
    {
        cin>>s;
        for(int j=0;j<s;j++)
        {
            cin>>xx;
            v[i].push_back(xx);
        }
    }

    /*for(int i=0;i<k;i++)
    {
        vector<int> :: iterator iter;
        cout<<i+1<<"-->";
        for(iter=v[i].begin();iter<v[i].end();iter++)
            cout<<*iter<<" ";
        cout<<endl;
    }*/
    
    int q,x,y;
    int fx,fy;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        vector<int> :: iterator f1,f2;
        cin>>x>>y;
        for(int j=0;j<k;j++)
        {
          f1 = find(v[j].begin(),v[j].end(),x);
          if(*f1!=0)
            fx = j+1;
        }
        for(int j=0;j<k;j++)
        {
          f2 = find(v[j].begin(),v[j].end(),y);
          if(* f2!=0)
            fy = j+1;   
        }
        cout<<"fx= "<<fx<<endl;
        cout<<"fy= "<<fy<<endl;
        cout<<abs(fx-fy)<<endl;
    }
    
}
