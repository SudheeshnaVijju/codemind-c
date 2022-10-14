#include<stdio.h>
int main()
{
    int n,arr[100],e[100],o[100],i,ec=0,oc=0,k,x,y,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        e[ec++]=arr[i];
        else
        o[oc++]=arr[i];
    }
    if(ec>oc)
    k=ec;
    else
    k=oc;
    x=0,y=0;
    while(k)
    {
        for(i=x;i<oc;i++)
        {
            printf("%d ",o[i]);
            y=i+1;
            break;
        }
        for(i=x;i<ec;i++)
        {
            printf("%d ",e[i]);
            x=i+1;
            break;
        }
        k--;
    }
    if(n%2)
    printf("0");
}