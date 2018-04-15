#include<stdio.h>
#include<string.h>

int main()
{
//int c,count,a=0,b=1;
int count;
char C,s1='a',s2='b';
printf("%c %c",s1,s2);
for(count=3;count<=5;count++)
{	
C=(char)s2+(char)s1;
printf("%c",C);
s1=s2;
s2=C;

}

}
