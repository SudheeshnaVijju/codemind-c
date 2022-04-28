#include<stdio.h>
int main()
{
   int i,n,a[100],j,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=a[0];
     for(i=0;i<n;i++)
     {
         if(m<=a[i])
         {
             m=a[i];
         }
     }
    
     for(j=1;j<=m;j++)
     {
         int c=0;
         for(i=0;i<n;i++)
         {
             if(a[i]%j==0)
             {
                 c++;
             }
         }
         if(c==n)
         {
             if(h<j)
             {
                 h=j;
             }
         }
        
     }
    printf("%d",h);

}