#include <iostream>
using namespace std;
long long factall[1000000+1];
long long MOD=1000000007;
     
inline long long modpow(long long base, long long exp){
    long long res = 1;
    while(exp > 0)
    {
        if(exp & 1)
            res = (res % MOD * base % MOD) % MOD;
        base = (base % MOD * base % MOD) % MOD;
        exp >>= 1;
    }
    return res;
}
 
inline long long inv(long long a){
    return modpow(a, MOD-2);
}
      
    int main(){
        
        factall[0]=1;
        for(long long i=1;i<=1000000;i++){
            factall[i]=(factall[i-1]*(i%MOD))%MOD;
        }

        long long n,m;
        cin>>n>>m;
        long long a[m], prod;
        prod = factall[n];
        
        for(long long i=0;i<m;i++){
            cin>>a[i];
            prod=(prod*inv(factall[a[i]]))%MOD;
        }
        cout<<prod<<endl;
        return 0;
    }