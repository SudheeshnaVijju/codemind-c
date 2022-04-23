#include<stdio.h>
int main()
{
    int n,i,a[100],m,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(a[i]==m)
        {
            break;
        }
    }
    printf("%d",s);
}