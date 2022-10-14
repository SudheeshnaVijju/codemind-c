#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i+=2)
    {
        if((arr[i-1]<arr[i] && arr[i+1]<arr[i])||(arr[i-1]>arr[i] && arr[i+1]>arr[i]))
        c++;
        else
        f++;
    }
    if(f==0)
    printf("%d",c);
    else
    printf("-1");
}