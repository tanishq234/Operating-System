#include<stdio.h>
int allocate_add(int avai_add[],int n,int s)
{
    int index=-1;
    for(int i=0;i<n;i++)
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
    scanf("%d"&n);
    int avai_add[n];
    printf("enter chunks");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&avai_add[i]);
    }
    int a;
    printf("enter process");
    scanf("%d",&a);
    int allo[a];
    printf("enter process request");
    for(int i=0;i<a;i++)
    {
        int s=allo[i];
        int p=allocate_add(avai_add,s,n);
        if(p==-1)
        {
            printf("memory not available");
        }
        else{
            printf("memory chunk %d availble",p);
        }
    }
    return 0;
}