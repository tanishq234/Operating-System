#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
    int n,temp,p[max],bt[max],wt[max],tat[max];
float awt=0,atat=0;
printf("enter no of process");
scanf("%d",&n);
printf("enter the process no");
for(int i=0;i<n;i++)
{
    scanf("%d",&p[i]);
} 
printf("enter burst time of process");
for(int i=0;i<n;i++)
{
    scanf("%d",&bt[i]);
}  
//applying bubble sort to sort according to the burst time
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
if(bt[j]>bt[j+1])
{
temp=bt[j];
bt[j]=bt[j+1];
bt[j+1]=temp;

temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;

}
    }
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
        printf("%d\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
awt=awt/n;
atat=atat/n;
printf("average waiting time is=%f",awt);
printf("average turn around time is=%f",atat);
}