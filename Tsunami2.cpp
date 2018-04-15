#include <stdio.h>
#include<bits/stdc++.h>
int simpleSieve(int limit)
{
    
    bool mark[limit];
    memset(mark, true, sizeof(mark));
 
    
    for (int p=2; p*p<limit; p++)
    {
        
        if (mark[p] == true)
        {
            
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }
 
   
        if (mark[limit-1] == true && limit!=2)
            return 1;
            else
            return 0;
}
/*int bin(long long l,long long r)
{
    unsigned i;
    int c=0;
    for(int k=l;k<=r;k++)
    {
    int a=0;
    for (i = 1 << 31; i > 0; i = i / 2)
        (k & i)? a++ : a=a;
       // printf("a==%d",a);
    if(simpleSieve(a+1))
      c++;
        
   }
   return c;
}*/
 
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

int main(void)
{
    int Q,i,y;
    long long int l,r;
    scanf("%d",&Q);
    for(i=0;i<Q;i++)
    {
     scanf("%lld %lld",&l,&r);
     for(int i=l;i<=r;i++){
      y= countSetBits(l,r); 
      
     }
     printf("%d\n",y);
   }
   
}

