#include<stdio.h>
int allocate_add(int avai_add[],int n,int s)
{
int index=-1;
for (int i=0;i<n;i++)
{
    if(avai_add[i]>s && avai_add[i]!=0)
    {
       index=avai_add[i];
       avai_add[i]=0;
       return index;
    }
}
return index;
}

int main()
{
    int n;
    printf("enter memory clunks");
    scanf("%d",&n);
    int avai_add[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&avai_add[i]);
    }
    int a;
    printf("enter no of process");
    scanf("%d",&a);
    int allo[a];
    printf("enter all process request");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&allo[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(avai_add[j]<avai_add[j+1])
            {
                int a=avai_add[j];
                avai_add[j]=avai_add[j+1];
                avai_add[j+1]=a;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int s=allo[i];
        int p=allocate_add(avai_add,s,n);
        if(p==-1)
        {
            printf("meory chunk not available");
        }
        else{
            printf("memory chunk of %d is",p);
        }
    }
    return 0;
}