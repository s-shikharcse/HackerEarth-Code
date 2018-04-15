#include<iostream>
using namespace std;

long int reverse(long int);

int main()
{
long int t,x,y,sum;
cin>>t;
while(t--)
{
cin>>x>>y;
long int x_rev=reverse(x);
long int y_rev=reverse(y);
long int sum=x_rev+y_rev;
long int sum_rev=reverse(sum);
cout<<sum_rev<<endl;
}

}

long int reverse(long int num)
{
long int rev,d;
rev=0;
while(num!=0)
{
d=num%10;
rev=rev*10+d;
num=num/10;
}
return rev;
}


