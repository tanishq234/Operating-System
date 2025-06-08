#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
    int n,bt[max],wt[max],tat[max];
    float awt=0,atat=0;
    printf("enter no. of process");
    scanf("%d",&n);
    printf("enter the burst time of the process");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);

    }
    printf("process\t burst time\t waiting time\t turn around time\n");
    for(int i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(int j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time=%f\n",awt);
    printf("average turn around time=%f\n",atat);


}