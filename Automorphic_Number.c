#include<stdio.h>
int main()
{
    int i,n,d,t,c=0,k,x,y=0,p,r=0;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    int s=t*t;
    k=s;
    while(c!=0)
    {
        x=s%10;
        s=s/10;
        y=y*10+x;
        c--;
    }
    while(y)
    {
        p=y%10;
        y=y/10;
        r=r*10+p;
    }
    if(r==t)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}