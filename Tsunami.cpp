#include<bits/stdc++.h>
using namespace std;


unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)  return false;
 
    // Check from 2 to n-1
    for (int i=2; i<sqrt(n); i++)
        if (n%i == 0)
            return false;
 
    return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int q;
	unsigned long long int l,r,i,count;
	cin>>q;
	while(q--){
		count = 0;
		cin>>l>>r;
		
		for(i=l;i<=r;i++){	
			count = countSetBits(i);
			bool ans = isPrime(count);
			if(ans==true)
				count++;
		}
		cout<<count<<"\n";
	}
}