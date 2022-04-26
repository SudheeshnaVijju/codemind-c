#include<stdio.h>
int main()
{
    int n,m,i,d,t,s;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        t=i;
        s=0;
        while(t)
        {
            d=t%10;
            t=t/10;
            s=s*10+d;
        }
        if(s==i)
        {
            printf("%d ",s);
        }
    }
}