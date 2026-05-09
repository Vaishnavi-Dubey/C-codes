#include<stdio.h>
int main()
{
    int i,j,n,pt,temp,avwt,avtat; //n=number of processes to be scheduled.
    printf("Enter Total Number of Process: ");
    scanf("%d",&n);
    int bt[n],p[n],wt[n],tat[n],pr[n];
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time: ");
        scanf("%d",&bt[i]);  //bt[n]=burst time of each process;
        printf("Priority: ");
        scanf("%d",&pr[i]);  //pr[n]=priority of each process.
        p[i]=i+1;
    }

    //Sort the processes in descending order of priority.
    for(i=0; i<n; i++)
    {
        pt=i;   //pt = The index of the process with the highest priority.
        for(j=i+1; j<n; j++)
        {
            if(pr[j]<pr[pt])
                pt=j;
        }

        temp=pr[i];
        pr[i]=pr[pt];
        pr[pt]=temp;

        temp=bt[i];
        bt[i]=bt[pt];
        bt[pt]=temp;

        temp=p[i];
        p[i]=p[pt];
        p[pt]=temp;
    }

    //Initialize the waiting time of each process to 0.
    wt[0]=0;
    for(i=1; i<n; i++)
    {
        wt[i] =  bt[i-1] + wt[i-1];
    }
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i] = bt[i]+wt[i];
        avwt += wt[i];
        avtat += tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
    avwt /= i;
    avtat /= i;
    printf("\n\nAverage Waiting Time = %d",avwt);
    printf("\nAverage Turnaround Time = %d\n",avtat);
    return 0;
}