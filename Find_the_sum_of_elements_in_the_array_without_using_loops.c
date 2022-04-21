#include<stdio.h>
int fun(int *a,int n,int s)
{
    if(n<0)
    {
        return s;
    }
    else
    {
        s=s+a[n-1];
        return fun(a,n-1,s);
    }
    
}
int main()
{
    int i,n,a[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f=fun(a,n,s);
    printf("%d",f);
    
}