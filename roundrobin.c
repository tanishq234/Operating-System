#include<stdio.h>
#include<conio.h>
void main()
{
    int n,qt,count=0,temp,sq=0,bt[10],wt[10],tat[10],rem_bt[10];
float awt=0,atat=0;
printf("enter no of process");
scanf("%d",&n);
printf("enter burst time of process");
for(int i=0;i<n;i++)
{
scanf("%d",&bt[i]);
rem_bt[i]=bt[i];
}
printf("enter quantum time");
scanf("%d",&qt);
while(1)
{
    for(int i=0,count=0;i<n;i++)
    {
        temp=qt;
        if(rem_bt[i]==0)
        {
            count++;
            continue;
        }
        if(rem_bt[i]>qt)
        {
            rem_bt[i]=rem_bt[i]-qt;

        }
        else
        if(rem_bt[i]>=0)
        {
temp=rem_bt[i];
rem_bt[i]=0;
        }
        sq=sq+temp;
        tat[i]=sq;

    }
    if(n==count)
    {
        break;
    }

}
printf("\nprocess\tburst time\tturnaround time\twaiting time\n");
for(int i=0;i<n;i++)
{
    wt[i]=tat[i]-bt[i];
    awt=awt+wt[i];
    atat=atat+tat[i];
    printf("\n%d\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);

}
awt=awt/n;
atat=atat/n;
printf("average waiting time is =%f",awt);
printf("average turnaround time is=%f",atat);

}