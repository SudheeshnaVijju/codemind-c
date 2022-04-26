#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d ",a[i]);
        }
    }
}