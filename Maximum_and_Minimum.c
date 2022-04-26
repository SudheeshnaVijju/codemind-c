#include<stdio.h>
int main()
{
    int i,n,j,a[100],b[100],c=0,k=0,m,ma;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
     {
         c=0;
         for(j=0;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
             }
         }
         if(a[i]==c)
         {
             b[k]=a[i];
             k++;
         }
     }
     if(k==0)
     {
         printf("-1");
         return 0;
     }
     for(i=0;i<k;i++)
     {
        // printf("%d ",b[i]);
         for(j=0;j<k;j++)
         {
             if(b[i]==b[j] && i!=j)
             {
                 b[j]=-1;
             }
         }
     }
     for(i=0;i<k;i++)
     {
         if(b[i]!=-1)
         {
             m=b[0];
             if(m<b[i])
             {
                 m=b[i];
             }
             else
             {
                 ma=b[i];
             }
         }
     }
     printf("%d %d",ma,m);
   
}