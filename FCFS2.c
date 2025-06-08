#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
    int n,bt[max],tat[max],wt[max],at[max],temp[max];
    float awt=0,atat=0;
    printf("enter no of process");
    scanf("%d",&n);
    printf("enter the burst time of the proces");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("enter arrival time of process");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&at[i]);

    }
    temp[0]=0;
    printf("process\t burst time\t arrival time\t waiting time\t turn around time\n");
    for(int i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat=tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],tat[i],wt[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time is=%f\n",awt);
    printf("average turn around time is=%f",atat);

}