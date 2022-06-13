//BY FCFS SCHEDULING

#include<stdio.h>
 
 int main()
 
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j,at[20];
    printf("Enter total number of processes(maximum 20):\n");
    scanf("%d",&n);
      printf("\nEnter Process Arrival Time:\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]:",i+1);
        scanf("%d",&at[i]);
    }
 
    printf("\nEnter Process Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
 
    wt[0]=0;   
 
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("\nProcess\t\tArrival time\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
          printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d",i+1,at[i],bt[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d\n",avtat);
 
    return 0;
}
