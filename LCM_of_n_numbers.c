#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=0;
    for(i=0;i<n;i++)
    {
        if(m<a[i])
        {
            m=a[i];
        }
    }
    int c=1,s;
    while(1)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            if((m*c)%a[i]==0)
            {
               s+=1; 
            }
        }
        if(s==n)
        {
            break;
        }
        c+=1;
    }
    printf("%d",m*c);
}