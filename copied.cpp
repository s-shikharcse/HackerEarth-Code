#include<stdio.h>
 using namespace std;
int main()
{
   long int num, count, total,t;
   scanf("%ld",&t);
   while(t--)
   {
   	total=0;
    scanf("%ld", &num);
    count = 5;
    while((num/count) >= 1)  
    {   
        total = total + num/count;
        count = count * 5;
    }   
    printf("%ld",total);
    printf("\n");
   }
    return 0;
}
