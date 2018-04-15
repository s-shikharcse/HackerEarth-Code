#include<string.h>
#include<stdio.h>

int main()
{
char s[]="124";
int n=0,i=0;
/*int l=strlen(s);
char s1[l];
s1=strrev(s);
*/
while(s[i]!='\0')
{
n=n*10+((int)s[i]-48);
i++;
}
printf("%d",n);
}
