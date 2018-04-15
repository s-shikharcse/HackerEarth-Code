#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long int t;
cin>>t;
long long int i,n,zeros5,gif5;

while(t--)
{
gif5=-1;
//gif2=-1;
i=1;
//j=1;
zeros5=0;
//zeros2=0;
cin>>n;
while(gif5!=0)
{
gif5=floor(n/(float)(pow(5,i)));
zeros5+=gif5;
i++;
}
/*while(gif2!=0)
{
gif2=floor(n/(float)(pow(2,j)));
zeros2+=gif2;
j++;
}

if(gif2>=gif5)
cout<<zeros5<<endl;
else
cout<<zeros2<<endl;
*/
cout<<zeros5<<endl;
}
}
