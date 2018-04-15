#include<bits/stdc++.h>
using namespace std;

#define p 101
#define MOD 1000000007

bool isPalindrome(string str, int L, int R)
{
	
	while (R > L)
		if (str[L++] != str[R--])
			return(false);
	return(true);
}

unsigned long long int modPow(unsigned long long int base,
							unsigned long long int exponent)
{
	if (exponent == 0)
		return 1;
	if (exponent == 1)
		return base;

	unsigned long long int temp = modPow(base, exponent/2);

	if (exponent %2 ==0)
		return (temp%MOD * temp%MOD) % MOD;
	else
		return ((( temp%MOD * temp%MOD)%MOD) * base%MOD) % MOD;
}


unsigned long long int findMMI(unsigned long long int n)
{
	return modPow(n, MOD-2);
}


void computePrefixHash(string str, int n, unsigned long long
					int prefix[], unsigned long long int power[])
{
	prefix[0] = 0;
	prefix[1] = str[0];

	for (int i=2; i<=n; i++)
		prefix[i] = (prefix[i-1]%MOD +
					(str[i-1]%MOD * power[i-1]%MOD)%MOD)%MOD;

	return;
}


void computeSuffixHash(string str, int n,
					unsigned long long int suffix[],
					unsigned long long int power[])
{
	suffix[0] = 0;
	suffix[1] = str[n-1];

	for (int i=n-2, j=2; i>=0 && j<=n; i--,j++)
		suffix[j] = (suffix[j-1]%MOD +
					(str[i]%MOD * power[j-1]%MOD)%MOD)%MOD;
	return;
}


void queryResults(string str, int L, int R, int n,
				unsigned long long int prefix[],
				unsigned long long int suffix[],
				unsigned long long int power[])
{	
		unsigned long long hash_LR =
			((prefix[R+1]-prefix[L]+MOD)%MOD *
			findMMI(power[L])%MOD)%MOD;

		
		unsigned long long reverse_hash_LR =
			((suffix[n-L]-suffix[n-R-1]+MOD)%MOD *
			findMMI(power[n-R-1])%MOD)%MOD;

		
		if (hash_LR == reverse_hash_LR )
		{
			if (isPalindrome(str, L, R) == true)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}

		else
			cout<<"NO\n";

	return;
}

void computePowers(unsigned long long int power[], int n)
{
	power[0] = 1;

	for(int i=1; i<=n; i++)
		power[i] = (power[i-1]%MOD * p%MOD)%MOD;

	return;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,q,type,l,r,index;
	char ch;
	string str;
	cin>>n>>q;
	cin>>str;

	for(int i=0;i<q;i++){
		cin>>type;
		if(type==1){
			cin>>index>>ch;
			str[index-1] = ch;
		}
		else{
			cin>>l>>r;
			unsigned long long int power[n+1];
			computePowers(power, n);
			unsigned long long int prefix[n+1], suffix[n+1];
			computePrefixHash(str, n, prefix, power);
			computeSuffixHash(str, n, suffix, power);
			queryResults(str, l, r, n, prefix, suffix, power);
		}
	}	
}
