#include<stdio.h>
int main()
{
    int n,d,s=0;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    if(t%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}