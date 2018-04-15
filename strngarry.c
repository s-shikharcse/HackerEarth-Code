#include<stdio.h>
#include<string.h>
int main()
{int i;
char c[11][11];
for(i=0;i<11;i++)
{printf("enter the name of the player :");
scanf("%s",&c[i][0]);
printf("you have entered %s \n",c[i]);
}
}
