#include<stdio.h>
int main()
{
    int n,i,a[100],c,d,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        //printf("%d ",a[i]);
        c=0;
        t=a[i];
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(a[i]==0)
        {
            c=1;
        }
        printf("%d ",c);
    }
}