#include<stdio.h>
int main()
{
    int i,n,a,b,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         if(arr[i]%2==0)
         {
             printf("%d ",arr[i]);
         }
         
     }
     for(i=0;i<n;i++)
     {
         if(arr[i]%2!=0)
         {
             printf("%d ",arr[i]);
         }
     }
   
}