#include<stdio.h>
int main()
{
    int n,arr[10000],i,c=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n-1;i++)
    {
        if(arr[i]+arr[i-1]==arr[i+1])
        {
            f=1;
            
        }
        else
        {
            f=0;
            break;
            
        }
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
}