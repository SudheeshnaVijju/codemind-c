#include<stdio.h>
int main()
{
    int n,i,a[100],j,m=0,s=0,k=0;
    float av;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=1;j<a[i];j++)
        {
           if(a[i]%j==0)
           {
               s++;
           }
        }
        if(s==1)
        {
            m=m+a[i];
            k++;
        }
    }
    av=(float)m/k;
    printf("%.2f",av);
}