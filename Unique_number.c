#include<stdio.h>
int main()
{
    int i,j,n,a[100],c=0,s,t,k=0;
    scanf("%d",&n);
    while(n)
    {
        int d=n%10;
        n=n/10;
        a[k]=d;
        k++;
    }
    for(i=0;i<k;i++)
    {
        s=0;
        for(j=0;j<k;j++)
        {
            if(a[i]==a[j])
            {
                s++;
            }
        }
        if(s==1)
        {
            c++;
        }
    }
    if(k==c)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}