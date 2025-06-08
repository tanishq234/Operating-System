#include<stdio.h>
int main()
{
    int at[10],bt[10],rt[10],completiontime,smallest;
    int remain=0,n,time,sum_wait=0,sum_turnaround;
    printf("enter no of process");
    scanf("%d",&n);
    printf("enter process no of burst time,arrival time");
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&at[i],&bt[i]);
        rt[i]=bt[i];

    }
    printf("\n\nproess\tturnaround time\twaiting time\n");
    for(int time=0;remain!=n;time++)
    {
        for(int i=0;i<n;i++)
        {
            if(at[i]<=time && rt[i])
            {
                smallest=i;
            }
        }
        rt[smallest]--;
        if(rt[smallest]==0);
        {
            remain++;
            completiontime=time+1;
            printf("\np[%d]\t\t%d\t\t%d",smallest+1,completiontime-at[smallest]);
            sum_wait=sum_wait+completiontime-bt[smallest]-at[smallest];

            sum_turnaround=sum_turnaround+completiontime-at[smallest];
        }
    }
    printf("average turnaround time=%f",sum_turnaround*1.0/5);
    return 0;

}