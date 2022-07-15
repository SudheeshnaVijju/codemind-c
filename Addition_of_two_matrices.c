#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    int a[r][r],b[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(j==r-1)
            {
                printf("%d",a[i][j]+b[i][j]);
            }
            else
            {
                printf("%d ",a[i][j]+b[i][j]);
            }
        }
        printf("
");
    }
  
}