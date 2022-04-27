#include<stdio.h>
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=(n-1);i>=(n/2);i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
    }
}
