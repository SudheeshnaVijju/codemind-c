#include<stdio.h>
int main(){
    int i,n,m;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=-1;
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(c[b[i]]==-1)
        {
            c[b[i]]=a[i];
        }
        else
        {
            int t=c[b[i]];
            for(int j=0;j<n;j++)
            {
                d[j]=c[j];
            }
            for(int j=b[i];j<n;j++)
            {
                c[j+1]=d[j];
            }
            c[b[i]]=a[i];
            
        }
    }
        for(i=0;i<n;i++)
        {
            printf("%d ",c[i]);
        }
}