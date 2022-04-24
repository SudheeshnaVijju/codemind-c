#include<stdio.h>
int main()
{
    int i,n,m,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(m==a[i])
        {
            printf("%d",i);
            break;
        }
    }
    if(c==0)
    {
        printf("-1 -1");
    }
}