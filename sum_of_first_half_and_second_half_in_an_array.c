#include<stdio.h>
int main()
{
    int n,i,a[100],m=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<(n/2))
        {
            s=s+a[i];
        }
        else
        {
            m=m+a[i];
        }
    }
    printf("%d
",s);
    printf("%d",m);
}