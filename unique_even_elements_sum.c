#include<stdio.h>
int main()
{
    int i,n,a[100],s=0,k=0,j,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]%2==0)
            {
                b[k]=a[i];
                k++;
            }
    }
    for(i=0;i<k;i++)
    {
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
            s=s+b[i];
        }
    }
    
    printf("%d",s);
}