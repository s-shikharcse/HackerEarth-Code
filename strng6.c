#include<string.h>
#include<stdio.h>
int main()
{
int n;
char *str[]={ "we will teach you how to ...","Move a mountain","Level a building","Erase tha past","Make a million","...all through C!" };
char *str1,*str2;
scanf("%s%s,*str1,*str2");
for(i=0;i<6;i++)
{
n=strstr(*(str[i]),str1);
printf("%d",n);
}



}
