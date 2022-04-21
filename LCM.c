#include<stdio.h>
int main()
{
    int n,m,t,i;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        t=m;
    }
    else
    {
        t=n;
    }
    for(i=1;i<t;i++)
    {
        if(i*t%n==0 && i*t%m==0)
        {
            printf("%d",i*t);
            break;
        }
    }
}