#include<stdio.h>
#include<string.h>
int main(){
char s[100];
char s1[100];
s1=strrev(s);
if(strcmp(s,s1)==0)
printf("Yes");
else
printf("No");
}
