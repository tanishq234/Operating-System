#include<stdio.h>
int main()
{
    int at[10],bt[10],rt[10],completiontime,smallest;
    int remain=0,n,time,sum_wait=0,sum_turnaround=0;
    printf("enter no of process");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enyter arrival time for process is %d",i+1);
        scanf("%d",&at[i]);
        printf("enter burst time of process is %d",i+1);
        scanf("%d",&bt[i]);
        rt[i]=bt[i];

    }
    printf("process\t|turnaround time|waiting time\n\n");
    for(time=0;remain!=n;time++)
    {
           for(int i=0;i<n;i++)
           {
            if(at[i]<=time && rt[i])
            {
                smallest=i;
            }
           }
           rt[smallest]--;
           if(rt[smallest]==0)
           {
            remain++;
            completiontime=time+1;
            printf("p[%d]\t|\t%d\t|%d",smallest+1,completiontime-at[smallest],completiontime-bt[smallest]-at[smallest]);
            sum_wait=sum_wait+completiontime-bt[smallest]-at[smallest];
            sum_turnaround=sum_turnaround+completiontime-at[smallest];
            return 0;
           }

    }
    
}