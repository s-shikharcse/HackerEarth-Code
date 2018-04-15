
#include<stdlib.h>
#include<stdio.h>
int main()
{
int i,j,bt[20],wt[20],tat[20],at[20],lt[20],n;
int time=0;
float wt_avg,tat_avg;
printf("Enter the number of processes : ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nBurst Time P%d :",i);
scanf("%10d",&bt[i]);
printf("Arrival Time P%d :",i);
scanf("%d",&at[i]);
}

wt[0]=0;
wt_avg=0;
i=0;
while(1)
{
if(time==at[i])
time++;

}

