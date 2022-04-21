#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i=0,t,s=0;
    scanf("%d",&n);
    t=n;
    int a=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        i++;
    }
    while(a)
    {
        d=a%10;
        a=a/10;
        s=s+pow(d,i);
        i--;
    }
    if(t==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}