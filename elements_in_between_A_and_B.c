#include<stdio.h>
int main()
{
    int n,c,b,i,a[100],x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(b<=a[i] && a[i]<=c || c<=a[i] && a[i]<=b)
        {
            printf("%d ",a[i]);
            x++;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
   
}