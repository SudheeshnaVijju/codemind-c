#include<stdio.h>
int main()
{
    int n,m,i,t;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        t=n;
    }
    else
    {
        t=m;
    }
    for(i=t;i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}