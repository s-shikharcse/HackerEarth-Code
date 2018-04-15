#include<string.h>
#include<stdio.h>

int main()
{
//int l1,l2,l3;
char *str1="united";
char *str2="front";
char *str3;
/*l1=strlen(*str1);
l2=strlen(*str2);
l3=l1+l2;
str3=(char *)malloc(len3+1);*/
str3=strcat(*str1,*str2);
printf("%s\n",*str3);
return 0;
}
