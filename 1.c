#include<stdio.h>
void findwaitingtime(int processes[],int n,int bt[],int wt[])
{
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wt[i]=bt[i-1]+wt[i-1];
    }
}

void findturnaroundtime(int processes[],int n,int bt[],int wt[],int tat[])
{
    for(int i=1;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
    }
}
void findaveragetime(int processes[],int n,int bt[])
{
    int wt[n],tat[n],total_wt=0,total_tat=0;
    findwaitingtime(processes,n,bt,wt);
    findturnaroundtime(processes,n,bt,wt,tat);

    printf("processes\tburst time\t waiting time\t turn around time\n");

    for(int i=0;i<n;i++)
    {
        total_wt=total_wt+wt[i];
        total_tat=total_tat+tat[i];
        printf("%d\t%d\t%d\t%d",i+1,bt[i],wt[i],tat[i]);
    }
float s=(float)total_wt/(float)n;
float t=(float)total_tat/(float)n;
printf("average waiting time is=%f",s);
printf("\n");
printf("average turn around time is=%f",t);
}

int main()
{
    int processes[]={1,2,3};
    int n=sizeof processes/sizeof processes[0];
    int burst_time[]={10,5,8};
    findaveragetime(processes,n,burst_time);
    return 0;
}