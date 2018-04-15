#include <iostream>
using namespace std;

typedef unsigned long int ULI ;

int main()
{
    ULI n;
    cin>>n;
    int count=0;
    for(ULI i=1;i<=n;i++)
    {
        ULI n=i;
        int max=0,flag=0;
        while(n!=0)
        {
            int d=n%10;
            if(d>=max)
            max=d;
            else
            {
            flag=1;
            break;
            }
        }
        if(flag!=1)
        count++;
        
        
    }
    cout<<count;
}
