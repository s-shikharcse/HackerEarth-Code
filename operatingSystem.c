#include<stdio.h>
int main()
{
int i,j,bt[20],wt[20],tat[20],n;
float wt_avg,tat_avg;
printf("Enter the number of processes : ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter the BurstTime for Process %d : ",i);
scanf("%d",&bt[i]);
}
wt_avg=0;
tat_avg=bt[0];
wt[0]=0;
tat[0]= bt[0];

for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
wt_avg+=wt[i];
tat_avg+=tat[i];
}
printf("Process \t BurstTime \t WaitingTime \t TurnAroundTime");
for(i=0;i<n;i++)
{
printf("\n %d \t\t %d \t\t %d \t\t %d",i,bt[i],wt[i],tat[i]);
}

printf("\nAverage Turn Around Time : %0.2f",tat_avg/n);
printf("\nAverage waiting Time : %0.2f",wt_avg/n);
}
