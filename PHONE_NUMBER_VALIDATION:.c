#include<stdio.h>
int main()
{
    long int n,c=0,s=0,d;
    scanf("%ld",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
        c++;
    }
    if(c==10 && s%10!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
}