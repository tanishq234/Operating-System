#include<stdio.h>
int index_ptr=0;
int alloacte_add(int avai_add[],int n,int s)
{
  int index=-1;
  for(int i=index_ptr;i<n+1;i++)
  {
    if(i==n){
        i=0;
    }
    if(avai_add[i]>s && avai_add[i]!=0)
    {
        index=avai_add[i];
        index_ptr=1;
        avai_add[i]=0;
        return index;
    }
    if(i==index_ptr-1)
    {
        return -1;
    }
  }
}

int main()
{
    printf("enter no of memory blocks");
    int n;
    scanf("%d",&n);
    int allo[n];
    printf("enter process");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&allo[i]);
    }
    int a;
    printf("enter no of process");
    scanf("%d",&a);
    int allo[a];
    printf("enter process");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&allo[i]);
    }
    for(int i=0;i<a;i++)
    {
        int s=allo[i];
        int p=allocate_add(avai_add,s,n);
        if(p==-1)
        {
            printf("memory chunk not available");
        }
        else{
            printf("memory chunk %d allocated",p);
        }
    }
    return 0;
}