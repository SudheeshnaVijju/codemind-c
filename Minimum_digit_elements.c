#include<stdio.h>
int main()
{
    int n,i,a[100],c,d,t,k=9999,s=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c=0;
        t=a[i];
        if(a[i]==0)
        {
            c=1;
        }        
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(k>=c)
        {
            k=c;
           // printf("h
");
        }
    }
    //printf("%d",k);
    for(i=0;i<=n-1;i++)
    {
        c=0;
        t=a[i];
        if(a[i]==0)
        {
            c=1;
        }        
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(c==k)
        {
            x++;
        }
        
    }
    printf("%d",x);
}