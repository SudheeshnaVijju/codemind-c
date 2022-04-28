#include<stdio.h>
int main()
{
    int t,n,i,m,s=0,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        m=n;
        s=0;
        while(n)
        {
            d=n%10;
            n=n/10;
            s=s*10+d;
        }
        if(s==m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
}