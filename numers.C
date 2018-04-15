#include <iostream>
using namespace std;

typedef unsigned long int ULI ;

int main()
{
    ULI n;
    cin>>n;
    ULI count=0;
    for(ULI i=1;i<=n;i++)
    {
        ULI n=i;
        int max=9,flag=0;
        while(n!=0)
        {
            int d=n%10;
            if(d<=max)
            max=d;
            else
            {
            flag=1;
            break;
            }
            n=n/10;
        }
        if(flag!=1)
        {
        count++;
        }
        
    }
    cout<<count;
}
