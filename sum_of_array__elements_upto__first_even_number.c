#include<stdio.h>
int main()
{
    int n,i,a[100],m,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            break;
        }
        s=s+a[i];
    }
    printf("%d",s);
}