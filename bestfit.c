#include<stdio.h>
int allocate_add(int avai_add[],int n,int s)
{
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(avai_add[i]>s && avai_add!=0)
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
    printf("enter the clunks");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&avai_add[i]);
    }
    printf("enter no of process");
    int a;
    scanf("%d",&a);
    int allo[a];
    printf("enter all process request");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&allo[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(avai_add[j]>avai_add[j+1])
            {
                int a=avai_add[j];
                avai_add[j]=avai_add[j+1];
                avai_add[j+1]=a;
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        int s=allo[i];
        int p=allocate_add(avai_add,s,n);

        if(p==-1)
        {
            printf("memory chunks not available");
        }
        else{
            printf("memory chunk %d is allocated",p);
        }

    }
    return 0;
}