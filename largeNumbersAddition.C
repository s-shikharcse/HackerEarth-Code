//Code not working
#include <iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()                   4568
                             12=   4580
{                            4568 8654
                             12=  21  =0854   
    int t;
    cin>>t;
    string sum,a,b;
    int aa,bb,s;
    unsigned long long max,length_a,length_b, j=0;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        
        length_a=a.length();
        length_b=b.length();
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        max=length_a;
        
        if(length_a>length_b)
        {
            max=length_a;
            for(j=length_b;j<length_a;j++)
            b[j]='0';
        }
        else if(length_a<length_b)
        {
            for(j=length_a;j<length_b;j++)
            a[j]='0';
            max=length_b;
        }*/
                
        
int carry=0;
      for(j=0;j<max;j++)
      {
       aa=int(a[j])-48;
       bb=int(b[j])-48;
      
      if(carry==0)
      s=aa+bb;
      else
      s=aa+bb+carry;
      
      if(s>9)
      {
          s=s%10;
          carry=1;
      }
      else
      carry=0;

      sum[j]=char(s+48);
      }
      
      cout<<sum<<endl;
    }
}

