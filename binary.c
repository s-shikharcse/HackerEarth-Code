#include<stdio.h>
void showbits(unsigned char n);

int main()
{

unsigned char num;
for(num=1;num<=5;num++)
{
printf("The Decimal %d is same as binary",num);
showbits(num);
printf("\n");
}

}

void showbits(unsigned char n)
{
unsigned char andmask,k;
int i;
for(i=7;i>=0;i--)
{
//j=i;
andmask=1<<i;
k=andmask & n;
k==0?printf("0"):printf("1");
}
}
